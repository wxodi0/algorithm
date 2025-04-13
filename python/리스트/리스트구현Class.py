class ArrayList:
  def __init__(self, capacity = 100):
    self.capacity = capacity
    self.array = [None]*capacity
    self.size = 0
  
  def isEmpty(self):
    return self.size == 0

  def isFull(self):
      return self.size == self.capacity
    
  def getEnty(self, pos) :
    if 0 <= pos < self.size :
      return self.array[pos]
    else: return None

  def insert(self, pos, e):
      if not self.isFull() and 0 <= pos <= self.size:
          for i in range(self.size, pos, -1):
              self.array[i] = self.array[i - 1]
          self.array[pos] = e
          self.size += 1
      else:
          print("삽입 위치가 바르지 않습니다.")

  def delete(self, pos):
      if not self.isEmpty() and 0 <= pos < self.size:
          e = self.array[pos]
          for i in range(pos, self.size - 1):
              self.array[i] = self.array[i + 1]
          self.array[self.size - 1] = None  
          self.size -= 1
          return e
      else:
          print("해당위치에 요소가 존재하지 않습니다.")
  
  def replace(self, pos, e):
    if not self.isEmpty() and 0 <= pos < self.size:
      backResult = self.array[pos]
      self.delete(pos)
      self.insert(pos, e)
      return backResult
      
    else:
      print("수정 위치가 바르지 않습니다.")
          
  def __str__(self):
      return str(self.array[0:self.size])
    
    
array_list = ArrayList()

# array_list.insert(0, 10)
# array_list.insert(1, 20)
# print(array_list)  
# print( array_list.isFull())

# print(array_list.delete(0))  #출력: 10
# print(array_list)  

# print(array_list.isEmpty())  

while(1):
  print("\n\n원하시는 명령어를 입력하여주세요.\n\n")
  print("[메뉴선택] i-입력, d-삭제, r-변경, p-출력, l-파일읽기, s-저장, q-종료=>")
  
  command = input()
  
  if(command == "i"):
    pos = int(input("입력행 번호: "))
    str = input("입력행 내용: ")
    
    array_list.insert(pos, str)
    
    print(f"{str}이가 {pos}위치에 입력되었습니다.\n")
    
  elif(command == "d"):
    pos = int(input("삭제행 번호: "))
    
    deleteResult = array_list.delete(pos)
    
    print(f"{pos}에 있는 {deleteResult}요소가 삭제되었습니다.\n")
    
  elif(command == "r"):
    pos = int(input("변경행 번호: "))
    str = input("변경행 내용: ")
    
    backResult =  array_list.replace(pos, str)
    print(f"{pos}위치의 {backResult}이가 {str}으로 변경되었습니다.\n")
    
  elif(command == "p"):
    print("Array의 목록을 출력합니다.\n")
    i = 0
    while(1):
      if(i >= array_list.size):
        break
      
      if(array_list.array[i] != "None"):
        print(f"{i}번째 방: {array_list.array[i]}")
      
      i += 1
    
  #파일 읽기, 저장
  elif(command == "l"):
    filename = 'test.txt'
    infile = open(filename, "r")
    lines = infile.readlines()
    for line in lines:
      list.insert(list.size, list.rstrip('\n'))
    infile.close()
  
  # elif(command == "s"):
  #   filename = 'test.txt'
  #   infile = open(filename, "w")
  #   len = list.size
    
    
    
  elif(command == "q"):
    print("프로그램이 종료됩니다.")
    break;
    

