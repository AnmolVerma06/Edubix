
ascii_value_A = ord('A')


num_characters = 26

for i in range(num_characters):
    char = chr(ascii_value_A + i)
    ascii_value = ord(char)
    print(f"Character: {char}  ASCII Value: {ascii_value}")
