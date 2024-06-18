# 프로젝트 문제 3번
input = [[4, 3, 2, 1],
         [0, 0, 0, 0],
         [0, 0, 9, 0],
         [1, 2, 3, 4]]
N = 4

forest = []

def problem3(input):
    bear_size = 2  
    honeycomb_count = 0 
    time = 0 
    bear_x, bear_y = 0, 0 
    # 입력 힌트

    # forest 리스트를 input 리스트로 초기화
    forest = [row[:] for row in input]
    
    # 곰의 초기 위치 찾기
    for i in range(N):
        for j in range(N):
            if forest[i][j] == 9:  
                bear_x, bear_y = i, j  
                forest[i][j] = 0  
    print("곰의 초기 위치 x : {0}, y : {1}".format(bear_x, bear_y))

    #여기에서부터 코드를 작성하세요.
    import queue  
    queue = queue.Queue()  

    def honeycombsearch(forest, xzero, yzero, bear_size):
        move = [(-1, 0), (1, 0), (0, -1), (0, 1)]
        queue.put((xzero, yzero, 0))
        visited = [[False for _ in range(N)] for _ in range(N)]  
        visited[xzero][yzero] = True 
        honeycombs = []  

        while not queue.empty():
            x, y, distance = queue.get()  

            for dx, dy in move:
                nx, ny = x + dx, y + dy  
                if 0 <= nx < N and 0 <= ny < N and not visited[nx][ny]:
                    if forest[nx][ny] <= bear_size:  
                        visited[nx][ny] = True
                        queue.put((nx, ny, distance + 1))
                        if 0 < forest[nx][ny] < bear_size: 
                            honeycombs.append((distance + 1, nx, ny))

        sortedhoneycombs = sorted(honeycombs)
        if len(sortedhoneycombs) > 0:
            return sortedhoneycombs[0] 
        else:
            return None  

    while True:
        nexthoneycomb = honeycombsearch(forest, bear_x, bear_y, bear_size)
        if not nexthoneycomb:
            break 

        distance, nextx, nexty = nexthoneycomb
        time = time + distance 
        forest[nextx][nexty] = 0  
        bear_x = nextx
        bear_y = nexty  
        honeycomb_count = honeycomb_count + 1 

        if honeycomb_count == bear_size:  
            bear_size = bear_size + 1  
            honeycomb_count = 0  

    return time  

result = problem3(input)

assert result == 14  
print("정답입니다. 결과:", result)