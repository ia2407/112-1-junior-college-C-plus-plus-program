13       	 <--SHAPES
12       	 <--LINES
id1
2       	 <--TYPE
288       	 <--LEFT
79       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
START
a


id2
91       	 <--TYPE
267       	 <--LEFT
130       	 <--TOP
109       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
輸入車速
a

id3
92       	 <--TYPE
284       	 <--LEFT
247       	 <--TOP
148       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_OR
b|IF_EQUAL|有
b|IF_EQUAL|無

id4
91       	 <--TYPE
257       	 <--LEFT
183       	 <--TOP
157       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
內車道有無車輛
b

id5
91       	 <--TYPE
173       	 <--LEFT
322       	 <--TOP
141       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
輸入前車速度
a

id6
91       	 <--TYPE
412       	 <--LEFT
315       	 <--TOP
157       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
沒有車輛可超車


id7
2       	 <--TYPE
442       	 <--LEFT
509       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
STOP



id8
91       	 <--TYPE
168       	 <--LEFT
407       	 <--TOP
157       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
輸入與前車距離
c

id9
92       	 <--TYPE
312       	 <--LEFT
403       	 <--TOP
140       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_AND
b|IF_LESS|30
c|IF_GREATER|30

id10
2       	 <--TYPE
621       	 <--LEFT
327       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
STOP



id11
91       	 <--TYPE
317       	 <--LEFT
466       	 <--TOP
94       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
超車


id12
91       	 <--TYPE
529       	 <--LEFT
420       	 <--TOP
90       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
不超車


id13
2       	 <--TYPE
593       	 <--LEFT
491       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
STOP



  
---- LINES ---- from,to ----
id1,id2
0

id2,id4
0

id4,id3
0

id3,id5
0
YES
id3,id6
0
NO
id5,id8
0

id8,id9
0

id6,id10
0

id9,id11
0
YES
id11,id7
0

id9,id12
0
NO
id12,id13
0

