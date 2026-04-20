class Solution:

    token = "-*SOME_SPECIAL_CHARS?*-"
    empty = "-*ACTUALLY_EMPTY*-"
    def encode(self, strs: List[str]) -> str:
        if len(strs) > 0:
            return self.token.join(strs)
        return self.empty

    def decode(self, s: str) -> List[str]:
        if not s:
            return [""]
        if s == self.empty:
            return []
        return s.split(self.token)