# 이진트리를 위한 노드 클래스

class BTNode:
    def __init__ (self, elem, left=None, right=None):
        self.data = elem 
        self.left = left        # 왼쪽 자식을 위한 링크
        self.right = right      # 오른쪽 자식을 위한 링크

    def isLeaf(self):
        return self.left is None and self.right is None


# 이진트리의 전위순회
def preorder(n) :
    if n is not None :
        #print('(', end=' ')     # 중첩된 괄호 표현을 위한 출력
        print(n.data, end=' ')
        preorder(n.left)
        preorder(n.right)
        #print(')', end=' ')     # 중첩된 괄호 표현을 위한 출력

# 이진트리의 중위 순회
def inorder(n) :
    if n is not None :
        inorder(n.left)
        print(n.data, end=' ')
        inorder(n.right)

# 이진트리의 후위 순회
def postorder(n) :
    if n is not None :
        postorder(n.left)
        postorder(n.right)
        print(n.data, end=' ')

# 이진트리의 노드의 개수 구하기
def count_node(n) :
    if n is None : 
        return 0
    else : 
        return 1 + count_node(n.left) + count_node(n.right)

# 이진트리의 높이 구하기
def calc_height(n) :
    if n is None : 
        return 0
    hLeft = calc_height(n.left)
    hRight = calc_height(n.right)
    if (hLeft > hRight) : return hLeft + 1
    else: return hRight + 1


# 이진트리 연산들의 테스트 프로그램
n28 = BTNode(28, None, None)
n20 = BTNode(20, None, None)
n11 = BTNode(11, None, None)
n17 = BTNode(17, None, None)
n41 = BTNode(41, n28, None)
n55 = BTNode(55, None, None)
n15 = BTNode(15, n11, n17)
n13 = BTNode(13, n20, None)
n42 = BTNode(42, n41, n55)
n19 = BTNode(19, n15, n13)
root = BTNode(24, n19, n42)

print('\n   In-Order : ', end=''); inorder(root)
print('\n  Pre-Order : ', end=''); preorder(root)
print('\n Post-Order : ', end=''); postorder(root)
print()

print(" 노드의 개수 = %d개" % count_node(root))
print(" 트리의 높이 = %d" % calc_height(root))
