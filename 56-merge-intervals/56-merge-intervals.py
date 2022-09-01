class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        
        if(len(intervals) == 0):
            return intervals
        
        result = []        
        intervals.sort()
        result.append(intervals[0])
        
        for i in range(1, len(intervals)):
            if(intervals[i][0] <= result[-1][1]):
                if(result[-1][1] > intervals[i][1]):
                    continue
                else:
                    result[-1][1] = intervals[i][1]
            else:
                result.append(intervals[i])
                
        return result
        