score = []
sum = 0
for i in range(1, 11):
	pingfen = float(input(f'请第{i}位评委输入评分:\n'))
	score.append(pingfen)
score.sort()
print(f'去掉最低分：{score[0]}')
print(f'去掉最高分：{score[-1]}')
score.remove(score[0])
score.pop()
for i in score:
	sum += i
print(f'选手最终得分为：{sum / len(score)}')