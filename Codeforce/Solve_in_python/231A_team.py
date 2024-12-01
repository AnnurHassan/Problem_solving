n = int(input())
if 1 <= n <= 100:
    problem_count = 0

    for i in range(n):
        string = input()
        count = string.count("1")

        if count >= 2:
            problem_count += 1

    print(problem_count)
