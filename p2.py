# 프로젝트 문제 2번
input = ")))()"

def problem2(input):
    # 이 곳에 코드를 작성하세요.
    leftb = 0
    rightb = 0
    result = 0
    for char in input:
        if char == '(':
            leftb = leftb + 1
        elif char == ')':
            if leftb == 0:
                rightb = rightb + 1
            else:
                leftb = leftb - 1

    result = leftb + rightb
    
    return result

result = problem2(input)

assert result == 3
print("정답입니다.")
