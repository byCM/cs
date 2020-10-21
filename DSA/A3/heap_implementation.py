import copy


# Implementation of a heap in python
# We use a list for the data in place of an array, as the list allow
# index-based access.

class Heap:
    def __init__(self):
        self.data = []  # Empty heap

    def extractMax(self):
        max = self.data[0]
        self.data[0] = self.data[len(self.data) - 1]
        self.data.pop()  # removes last element
        self.heapify(0)
        return max

    # Don't need to pass in heap size, can compute from data[]
    # The objects in the heap must have < and > defined
    def heapify(self, i):
        largest = i  # Initialize largest as root
        left = 2 * i + 1  # Formula for 0-based array
        right = 2 * i + 2
        heapSize = len(self.data)

        if (left < heapSize and self.data[left] > self.data[largest]):
            largest = left
        if (right < heapSize and self.data[right] > self.data[largest]):
            largest = right

        if (largest != i):
            temp = self.data[i]
            self.data[i] = self.data[largest]
            self.data[largest] = temp
            self.heapify(largest)

    def buildHeap(self, sourceList):
        self.data = copy.deepcopy(sourceList)  # Makes deep copy of list
        for i in range(len(self.data) - 1, -1, -1):  # i-1 down to 0
            self.heapify(i)

    # Insert will be left for you to implement in an upcoming assignment
    def insert(self, element):

        # add the element into the data
        self.data.append(element)

        # start from the last index
        cur = len(self.data) - 1


        """
        below we are shifting from bottom to top
        """
        # while do not reach to root
        while (cur - 1) // 2 >= 0:
            # If the element is less than its parent swap the elements
            if self.data[cur] > self.data[(cur - 1) // 2]:

                # swap operation
                self.data[cur], self.data[(cur - 1) // 2] = self.data[(cur - 1) // 2], self.data[cur]

                # Move the index to the parent to keep the properties
            cur = (cur - 1) // 2


class Person:

    def __init__(self, name, age):
        self.name = name
        self.age = age

    def __eq__(self, other):
        """
        for == operation
        :param other:
        :return:
        """
        if self.name == other.name:
            return True
        else:
            return False

    def __gt__(self, other):
        """
        for > operation
        :param other:
        :return:
        """
        return self.name > other.name

    def __lt__(self, other):
        """
        for < operation
        :param other:
        :return:
        """
        return self.name < other.name

    def __str__(self):
        """
        str method for print
        :return:
        """
        return f"name: {self.name}, age: {self.age}"


"""
Driver program
"""
person1 = Person("A", 20)
person2 = Person("B", 21)
person3 = Person("C", 22)
person4 = Person("D", 23)
person5 = Person("E", 24)
person6 = Person("F", 25)


heap = Heap()

heap.insert(person1)
heap.insert(person6)
heap.insert(person3)
heap.insert(person2)
heap.insert(person4)
heap.insert(person5)

print("============Max extraction=============")
while heap.data:
    print(heap.extractMax())

