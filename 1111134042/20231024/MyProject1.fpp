16       	 <--SHAPES
17       	 <--LINES
id1
2       	 <--TYPE
140       	 <--LEFT
66       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
START



id2
0       	 <--TYPE
850       	 <--LEFT
63       	 <--TOP
78       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
DEFINITION
speed
0

id3
91       	 <--TYPE
1042       	 <--LEFT
56       	 <--TOP
137       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
ヘ玡ó硉
speed

id4
0       	 <--TYPE
430       	 <--LEFT
430       	 <--TOP
92       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
DEFINITION
distance
0

id5
0       	 <--TYPE
425       	 <--LEFT
572       	 <--TOP
99       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
DEFINITION
eyespeed
0

id6
0       	 <--TYPE
1333       	 <--LEFT
61       	 <--TOP
116       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
DEFINITION
ず凹ó进
0

id7
91       	 <--TYPE
1290       	 <--LEFT
284       	 <--TOP
198       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
ず凹ó进计
ず凹ó进

id8
92       	 <--TYPE
360       	 <--LEFT
727       	 <--TOP
231       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_AND
distance|IF_GREATER|30
eyespeed|IF_LESS|30

id9
91       	 <--TYPE
399       	 <--LEFT
495       	 <--TOP
151       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
ヘ代禯瞒
distance

id10
91       	 <--TYPE
395       	 <--LEFT
642       	 <--TOP
158       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
ヘ代硉
eyespeed

id11
91       	 <--TYPE
430       	 <--LEFT
825       	 <--TOP
94       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
荷е禬ó


id12
2       	 <--TYPE
832       	 <--LEFT
824       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
STOP



id13
92       	 <--TYPE
410       	 <--LEFT
280       	 <--TOP
135       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_EQUAL
ず凹ó进
0

id14
3       	 <--TYPE
316       	 <--LEFT
299       	 <--TOP
10       	 <--WIDTH
10       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INTERSECTION



id15
3       	 <--TYPE
680       	 <--LEFT
506       	 <--TOP
10       	 <--WIDTH
10       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INTERSECTION



id16
91       	 <--TYPE
828       	 <--LEFT
491       	 <--TOP
126       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
蝴ㄓó笵


  
---- LINES ---- from,to ----
id1,id2
0

id2,id3
0

id3,id6
0

id6,id7
0

id4,id9
0

id9,id5
0

id5,id10
0

id10,id8
0

id8,id11
0
YES
id11,id12
0

id7,id13
0

id8,id15
0
NO
id13,id14
0
YES
id14,id11
0

id13,id4
0
NO
id15,id16
0

id16,id2
0

