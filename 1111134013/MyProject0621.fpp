13       	 <--SHAPES
12       	 <--LINES
id1
2       	 <--TYPE
321       	 <--LEFT
51       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
START



id2
91       	 <--TYPE
302       	 <--LEFT
94       	 <--TOP
109       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
目前車速
s

id3
92       	 <--TYPE
270       	 <--LEFT
212       	 <--TOP
176       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_EQUAL
ans
1

id4
91       	 <--TYPE
529       	 <--LEFT
216       	 <--TOP
90       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
超車


id5
92       	 <--TYPE
213       	 <--LEFT
340       	 <--TOP
294       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_GREATER
m
30

id6
91       	 <--TYPE
325       	 <--LEFT
551       	 <--TOP
90       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
超車


id7
91       	 <--TYPE
602       	 <--LEFT
345       	 <--TOP
94       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
維持車道


id8
91       	 <--TYPE
236       	 <--LEFT
155       	 <--TOP
241       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
內側是否有車,有答1,否答0
ans

id10
92       	 <--TYPE
300       	 <--LEFT
473       	 <--TOP
134       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_LESS
km
30

id11
91       	 <--TYPE
305       	 <--LEFT
283       	 <--TOP
113       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
目測距離
m

id12
91       	 <--TYPE
302       	 <--LEFT
422       	 <--TOP
131       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
目測速度
km

id9
2       	 <--TYPE
339       	 <--LEFT
608       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
STOP



id13
91       	 <--TYPE
550       	 <--LEFT
475       	 <--TOP
94       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
維持車道


  
---- LINES ---- from,to ----
id5,id7
0
NO
id2,id8
0

id8,id3
0

id10,id6
0
YES
id11,id5
0

id5,id12
0
YES
id12,id10
0

id1,id2
0

id3,id11
0
YES
id3,id4
0
NO
id6,id9
0

id10,id13
0
NO
