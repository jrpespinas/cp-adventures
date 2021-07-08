class Solution:
    def interpret(self, command: str) -> str:
        string = command.replace("(al)", "al")
        return string.replace("()", "o")