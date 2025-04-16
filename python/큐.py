
# 배열을 이용한 원형큐 클래스

# 원형 큐: 클래스 정의와 생성자
class ArrayQueue :
    def __init__( self, capacity ) :   # 생성자 정의
        self.capacity = capacity            # 용량(고정)
        self.array = [None] * capacity      # 요소들을 저장할 배열
        self.front = 0                     # 전단 인덱스
        self.rear = 0                      # 후단 인덱스

    # 원형 큐: 공백상태와 포화상태 검사
    def isEmpty( self ) :                   # 공백 상태
        return self.front == self.rear

    def isFull( self ) :                    # 포화 상태
        return self.front == (self.rear+1)%self.capacity

    # 원형 큐: 삽입 연산
    def enqueue( self, item ):              # 삽입 연산
        if not self.isFull():               # 포화 상태가 아닌 경우
            self.rear = (self.rear + 1) % self.capacity
            self.array[self.rear] = item
        else : pass                         # 오버플로 오류: 처리 않음

    # 원형 큐: 삭제 연산
    def dequeue( self ):
        if not self.isEmpty():
            self.front = (self.front + 1) % self.capacity
            return self.array[self.front]
        else : pass                         # 언더플로 오류: 처리 않음

    # 원형 큐: 상단 들여다보기 연산
    def peek( self ):
        if not self.isEmpty():
            return self.array[(self.front + 1) % self.capacity]
        else : pass                         # 언더플로 오류: 처리 않음

    # 원형 큐: 전체 요소의 수
    def size( self ) :
        return (self.rear - self.front + self.capacity) % self.capacity

    # 원형 큐: 전체 요소를 화면으로 출력
    def display(self, msg='Queue:' ):
        print(msg, end='= [')
        count = self.size()
        for i in range(count):
            print(self.array[(self.front+1+i)%self.capacity], end=' ')
        print("]")

array_queue = ArrayQueue(100)

for idx in range(0, 100):
  array_queue.enqueue(idx)
print("삽입이 완료되었습니다.")
for idx in range(0, 100):
  print(f"{array_queue.dequeue()}")
  