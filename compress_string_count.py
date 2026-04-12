def compress_string(s):
    if not s:
        return ""
    
    compressed = []
    count = 1
    
    for i in range(1, len(s)):
        if s[i] == s[i-1]:
            count += 1
        else:
            compressed.append(s[i-1] + str(count))
            count = 1
            
    # Add the last character and its count
    compressed.append(s[-1] + str(count))
    
    return "".join(compressed)

if __name__ == "__main__":
    input_str = "aaabbc"
    print(f"Input:  {input_str}")
    result = compress_string(input_str)
    print(f"Output: {result}")
