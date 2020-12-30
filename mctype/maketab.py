# -*- coding: utf-8 -*-
# @Author: GUNK
# @Date:   2020-12-29 18:45:53
# @Last Modified by:   GUNK
# @Last Modified time: 2020-12-29 19:26:14
# for i in range(0x7b, 0xff + 1):
# 	if(i % 8 == 7):
# 		print("0x%02x" % i, end = ',\n')
	# else:
# 		print("0x%02x" % i, end = ', ')


# for i in range(ord('A'), ord('Z') + 1):
# if((i - ord('A')) % 8 == 6):
# 	print(" \'%c\'" % i, end = ',\n')
# else:
# 	print(" \'%c\'" % i, end = ', ')

times = int(input())
sstr = input()
for i in range(0, times):
	print(sstr, end = ', ')	