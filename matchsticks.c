#include <stdio.h>

bool dfs(int * matchsticks, int matchsticksSize, int index,  int left, int right, int top , int bottom, int target){
	if(index >= matchsticks || left > target || right > target || top > target || bottom > target) return false;
	if(index >= matchsticks && left == target && right == target && top == target && bottom == target) return true;

	bool t = dfs(matchsticks, matchSticksSize, index +1 , left + matchsticks[index], right, top, bottom, target);
	if(t) return true;
	t = dfs(matchsticks, matchSticksSize, index + 1, left , right  + matchsticks[index] , top , bottom, target);
	if(t) return true;
	t = dfs(matchsticks, matchSticksSize, index + 1, left , right  , top + matchsticks[index] , bottom, target);
	if(t) return true;
	t = dfs(matchsticks, matchSticksSize, index + 1, left , right  , top , bottom + matchsticks[index] , target);
	if(t) return true;
	return false;
}



bool makesquare(int* matchsticks, int matchsticksSize) {
    int pm = 0;
    for(int i = 0; i < matchsticksSize ; i ++) pm += matchsticks[i];
    if(pm % 4 != 0) return false;
	return dfs(matchsticks, matchSticksSize, 0, 0, 0, 0, 0 , pm /4);
}