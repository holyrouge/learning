word = "xabc $_Yg"

def is_unique(word):
    for char in word:
        if word[word.find(char) + 1:].find(char) > 0:
            return False
    return True
    

print(is_unique(word))
