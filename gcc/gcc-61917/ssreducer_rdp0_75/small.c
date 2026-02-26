


typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;

typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;


static int8_t
(safe_mul_func_int8_t_s_s)(int8_t si1  )
{}
static int8_t
(safe_lshift_func_int8_t_s_s)(int8_t left  )
{}
static int8_t
(safe_lshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
(safe_rshift_func_int8_t_s_u)(int8_t left  )
{}
static int16_t
(safe_sub_func_int16_t_s_s)(int16_t si1  )
{
 
  return
    (si1 - ((int16_t)1));
}
static int16_t
(safe_mul_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{}
static int16_t
(safe_lshift_func_int16_t_s_s)(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
(safe_lshift_func_int16_t_s_u)(int16_t left  )
{}
static int16_t
(safe_rshift_func_int16_t_s_u)(int16_t left  )
{
 
  return
    ((left < 0) || (((unsigned int)((unsigned int)1)) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)((unsigned int)1)));
}
static int32_t
(safe_unary_minus_func_int32_t_s)(int32_t si )
{}
static int32_t
(safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static uint8_t
(safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{}
static uint8_t
(safe_mod_func_uint8_t_u_u)(uint8_t ui1  )
{}
static uint8_t
(safe_lshift_func_uint8_t_u_s)( int right )
{}
static uint16_t
(safe_add_func_uint16_t_u_u)(uint16_t ui1  )
{}
static uint16_t
(safe_mod_func_uint16_t_u_u)( uint16_t ui2 )
{}
static uint32_t
(safe_sub_func_uint32_t_u_u)( uint32_t ui2 )
{
 
  return ((uint32_t)1) - ui2;
}
static uint32_t
(safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static
  int32_t
  g_3
  =
  0x2C70BB74L;
static
  int32_t
  g_71
  [9]
  =
  {
4L,
4L,
4L,
4L,
4L,
4L,
4L,
4L,
4L
};
static
  int32_t
  g_201
  =
  0x90B57F07L;
static
  int8_t
  g_344
  =
  1L;
static
  uint8_t
  g_588
  =
  0xDDL;
static
  uint16_t
  g_774
  =
  0x02FDL;
static
  volatile
  uint32_t
  g_1265
  [5]
  [8]
  =
  {
{0xDDA6101AL,
0xDDA6101AL,
0xDDA6101AL,
0xDDA6101AL,
0xDDA6101AL,
0xDDA6101AL,
0xDDA6101AL,
0xDDA6101AL},
{0xDDA6101AL,
0xDDA6101AL,
0xDDA6101AL,
0xDDA6101AL,
0xDDA6101AL,
0xDDA6101AL,
0xDDA6101AL,
0xDDA6101AL},
{0xDDA6101AL,
0xDDA6101AL, 0xDDA6101AL,
0xDDA6101AL, 0xDDA6101AL,
0xDDA6101AL, 0xDDA6101AL,
0xDDA6101AL}, {0xDDA6101AL,
0xDDA6101AL, 0xDDA6101AL,
0xDDA6101AL, 0xDDA6101AL,
0xDDA6101AL, 0xDDA6101AL,
0xDDA6101AL}, {0xDDA6101AL,
0xDDA6101AL, 0xDDA6101AL,
0xDDA6101AL, 0xDDA6101AL,
0xDDA6101AL, 0xDDA6101AL,
0xDDA6101AL} };
static
  int16_t
  g_1835
  [1]
  [7]
  [5]
  =
  {
{{(-9L), (-9L), 2L, (-9L), (-9L)}, {(-1L), (-9L), (-1L), (-1L), (-9L)}, {(-9L), (-1L), (-1L), (-9L), (-1L)}, {(-9L), (-9L), 2L, (-9L), (-9L)}, {(-1L), (-9L), (-1L), (-1L), (-9L)}, {(-9L), (-1L), (-1L), (-9L), (-1L)}, {(-9L), (-9L), 2L, (-9L), (-9L)}} };
static
  int8_t
  g_2004
  [7]
  [1]
  [10]
  =
  {
{{0L, 9L, 0L, (-1L), 0L, (-1L), (-1L), 0L, (-1L), 0L}}, {{0L, 0L, 0xD5L, 0L, 0xE5L, (-1L), 2L, (-1L), 0xE5L, 0L}}, {{0L, (-3L), 0L, (-1L), 0x7BL, 0L, 2L, 2L, 0L, 0x7BL}}, {{0xD5L, 0L, 0L, 0L, (-1L), 0L, 9L, 0L, 9L, 0L}}, {{2L, (-3L), (-1L), (-3L), 2L, 0xD5L, (-1L), 9L, 9L, (-1L)}}, {{0L, 0xD5L, 0L, 0L, 0xD5L, 0L, 0xE5L, (-1L), 2L, (-1L)}}, {{(-3L), 0L, 2L, 9L, 2L, 0L, (-3L), 0xE5L, 0L, 0L}} };
static
  int16_t
func_1
();
static
  int32_t
func_4
(int16_t
p_5
);
static
  int16_t
func_6
(uint8_t
p_7
);
static
  uint16_t
func_14
(
int8_t
p_16
);
static
  int16_t
func_22
(
);
static
  int32_t
func_42
(uint16_t
p_43
);
static
  uint8_t
func_45
(uint32_t
p_46
,
uint32_t
p_48,
int16_t
p_49,
uint16_t
p_50
);
static int16_t
func_1 ()
{
  int16_t
    l_2
    [1];
  int
    i;
  for
    (i
     =
     0;
     i
     <
     1;
     i++)
    l_2
      [i]
      =
      0x2062L;
  for
    (g_3
     =
     0;
     (g_3
      >=
      0);
     )
  {
    if (func_4 ((l_2[g_3] = func_6 (((0x9869L > (safe_lshift_func_int8_t_s_u (0x5AL, 7))) <= l_2[g_3])))))
    {
      if ((((((((((uint32_t)1)) || 0xFDL) >= ((volatile uint32_t)1)) & ((uint32_t)1)) < ((((safe_rshift_func_int16_t_s_u (l_2[0] )) != ((-1L) <= (((int8_t)1)))) | g_1835[0][3][2]) < ((int16_t)1))) < l_2[g_3]) | g_344))
      {
 for
   (g_588
    =
    0;
    (g_588
     <
     57);
    )
 {
   return
     l_2
     [0];
 };
 }
      else
      {
 for
   (0;
    (((int32_t)1)
     >=
     (-1));
    )
 {
{
    if (func_4 ((l_2[g_3] = func_6 (((0x9869L > (safe_lshift_func_int8_t_s_u (0x5AL, 7))) <= l_2[g_3])))))
    {
      }
    else;
  }
 };
}
      }
    else;
  };
  }
static int32_t
func_4
  (int16_t
   p_5
)
{
  return
    g_588;
}
static int16_t
func_6
  (uint8_t
   p_7
)
{
  if (g_3)
  {
    }
  else
  {
    if ((safe_add_func_int32_t_s_s ((((uint8_t)1)), ((uint8_t)1))))
    {
      return
 p_7;
    }
    else
    {
      {
    (safe_lshift_func_int16_t_s_u
       ((0x673E7ED6L > (g_71[7] = (!(safe_mul_func_int16_t_s_s (p_7, func_14 ( (((int32_t)1) & (safe_mod_func_uint16_t_u_u ( func_22 ( ))))  )))))) ));
  }
}
  }
  }
static uint16_t
func_14
  (
   int8_t
   p_16
   )
{}
static int16_t
func_22
  (
   )
{
  if ((1L ^ (safe_lshift_func_int16_t_s_s (((int8_t)1), ((int32_t)1)))))
  {
    if (((g_71[7] = func_42 ((((int8_t)1) & func_45 ((((int16_t)1)) , g_3, (((int32_t)1) > (((g_71[7] = ((int32_t)1)) >= g_2004[1][0][4]))), ((uint8_t)1))) )) >= 1UL))
    {
      }
    else;
  }
  else;
  }
static int32_t
func_42
  (uint16_t
   p_43
   )
{}
static uint8_t
func_45
  (uint32_t
   p_46
   ,
   uint32_t
   p_48,
   int16_t
   p_49,
   uint16_t
   p_50
)
{
  if ((0UL && ((safe_lshift_func_int8_t_s_u (0x5BL, g_1835[0][3][2])))))
  {
    }
  else
  {
    int32_t
      l_2307
      =
      (-9L);
    for
      (p_49
       =
       0;
       (p_49
 !=
 (-23));
       )
    {
      for
 (g_774
  =
  0;
  (g_774
   <
   20);
  g_774++)
      {
 for
   (g_201
    =
    0;
    (g_201
     >=
     (-27));
    g_201
    =
    safe_sub_func_int16_t_s_s
    (g_201
     ))
 {
   l_2307
     =
     (safe_unary_minus_func_int32_t_s
      ((safe_mod_func_uint8_t_u_u (((p_46 = ((safe_sub_func_uint32_t_u_u ( p_46)))) == ((uint32_t)1)) ))));
 }
      }
for
 (g_774
  =
  0;
  (g_774
   <
   20);
  g_774++)
      {
 g_71
   [7]
   =
   ((safe_sub_func_int16_t_s_s ((safe_add_func_uint16_t_u_u ((0x02D3L | ((g_2004[0][0][2] = (((int16_t)1))) | (((((uint16_t)1) ^ ((uint32_t)1)) != ((65528UL && (((int8_t)1) < (((((((int32_t)1)) || (((uint16_t)1))) == ((uint8_t)1)) == p_50) && g_201))) && 65532UL)) >= p_48))) )) )) > p_50);
 (((safe_mul_func_int8_t_s_s ((safe_lshift_func_uint8_t_u_s ( (safe_add_func_uint8_t_u_u (p_46, ((((g_2004[6][0][8] && ((safe_mod_func_uint32_t_u_u (p_46, l_2307)) || ((((safe_rshift_func_int8_t_s_u (((safe_mul_func_int16_t_s_s (((safe_rshift_func_int16_t_s_u (((safe_add_func_uint16_t_u_u ((safe_lshift_func_int8_t_s_s (((((int32_t)1) ^ (p_48 == ((!((safe_add_func_uint8_t_u_u ((((((uint8_t)1)) >= g_1265[2][5]) > 0L), 0x7FL)) && ((uint16_t)1))) >= ((int32_t)1)))) & p_48) )) )) || 4294967288UL) )) != 0UL), p_50))) )) >= p_49) == ((uint32_t)1)) == g_1835[0][3][2]))) <= 0x7D15L) >= ((uint32_t)1)) < g_2004[6][0][1]))))) )) && p_50) & ((uint32_t)1));
 }
    };
  }
  }
int
main ()
{
  func_1
    ();
  }
