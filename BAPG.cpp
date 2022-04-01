for _ in range(int(input())):
	n,m=map(int,input().split())
	arr=list(map(int,input().split()))
	arr.sort(reverse=True)
	s=0
	for i in range(min(n,m)):
		s+=arr[i]
	print(s)