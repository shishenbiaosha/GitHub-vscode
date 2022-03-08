sensitive_words = ['你好']
words = input('请输入一段话：\n')
for keys in sensitive_words:
    if keys in words:
        words = words.replace(keys, '**')
print(words)