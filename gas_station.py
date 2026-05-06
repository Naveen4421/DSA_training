class Solution(object):
    def canCompleteCircuit(self, gas, cost):
        """
        :type gas: List[int]
        :type cost: List[int]
        :rtype: int
        """
        if not gas:
            return 0

        if sum(gas) < sum(cost):
            return -1

        start = 0
        r = 0
        i = 0
        count=0

        while count<len(gas):
            jour = r + gas[i] - cost[i]

            if jour < 0:
                start = i + 1
                r = 0
                count=0
            else:                
                r = jour
                count+=1

            i = (i + 1) % len(gas)   
        return start
