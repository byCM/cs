from collections import defaultdict

class TrieNode():
   def __init__(self):
      
       # Initialising one node for trie
       self.children = defaultdict(None)
       self.last = False
  
  
class Trie():
  
def __init__(self):      
   self.root = TrieNode()
   self.word_list = []

def insertAllKeys(self, words):
   for key in words:
      self.insert(self.root,key,key)
  
  
def insert(self,node,remaining_word,original_word):  
   if remaining_word == "":
      return
   c = remaining_word[0]     
   w = ""
  
   if len(remaining_word) == 1:
      w = ""
      node.last = True
   else :
      w = remaining_word[1:]
  
  
if c not in node.children:
      node.children[c] = TrieNode()
      self.insert(node.children[c],w,original_word)
   else :
      self.insert(node.children[c],w,original_word)


def find(self,root, word):    
   if root == None:
      return False
   if word == "":
      return root.last
   c = word[0]
   w = ""
   if len(word) == 0:
      w = ""
   else :
      w = ""+word[1:]
  
  
   if c not in root.children:
      return False
   else :
      return self.find(root.children[c],w)

  
def search_string(self, node, word):
  if node.last:
      self.word_list.append(word)
  
  for a,n in node.children.items():
      self.search_string(n, word + a)
  
def search_string_based_on_prefix(self, node,key):
  not_found = False
   temp_word = ''
  
   for a in list(key):
      if not node.children.get(a):
      not_found = True
      break
  
   temp_word += a
   node = node.children[a]
  
   if not_found:
      return 0
   elif node.last and not node.children:
      return -1
  
self.word_list = []
self.search_string(node, temp_word)
print("List of string with prefix ",key)
  
for s in self.word_list:
   print(s)
   return 1

  
  
  
def main():
   file_name = input("Please enter the file name : ")
   keys = [] 
fopen = open(file_name,"r")
  
for x in fopen:
   keys.append(x)
   trie = Trie()
   trie.insertAllKeys(keys)

   word = input("Please enter the string to be search : ")
  
   found = trie.find(trie.root,word)

if found == True:
   print("String is found")
else :
   print("String is not found")


key = input("Please enter the prefix of strings to be search: ")   
value = trie.search_string_based_on_prefix(trie.root,key)
  
if value == 0:
print("No string with this prefix found ")
  
  
  
if __name__ == "__main__":
main()
