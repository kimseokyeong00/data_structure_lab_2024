# 프로젝트 문제 1번
input = [10, 40, 30, 60, 30]

def problem1(input):
    mean = 0
    median = 0
    result = [0,0]
    # 평균값
    sumnum = sum(input)
    mean = sumnum/len(input)
    # 중앙값
    sortednum = sorted(input)
    def med(input):
        if len(sortednum) % 2 == 1:
            medi = sortednum[len(sortednum) // 2]
    
        else:
            mid1 = sorted_lst[len(sortednum) // 2 - 1]
            mid2 = sorted_lst[len(sortednum) // 2]
            medi = (middle1 + middle2) / 2
        return medi
    median = med(input)
    
    result[0] = mean
    result[1] = median
    return result

result = problem1(input)

assert result == [34, 30]
print("정답입니다.")
