class Solution:
    def countMatches(self, items: List[List[str]], ruleKey: str, ruleValue: str) -> int:
        ruleKeys = {
             "type": 0,
             "color": 1,
             "name": 2
        }

        match = 0
        for item in items:
            if item[ruleKeys[ruleKey]] == ruleValue:
                match += 1
        return match