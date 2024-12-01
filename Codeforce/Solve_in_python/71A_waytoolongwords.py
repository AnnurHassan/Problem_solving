n = int(input())
if 1 <= n <= 100:
    for i in range(n):
        word = input()

        if len(word) > 10:
            print(f"{word[0]}{len(word)-2}{word[-1]}")

        else:
            print(word)
