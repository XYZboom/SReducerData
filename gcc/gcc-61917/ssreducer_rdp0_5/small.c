


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
(safe_mod_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
(safe_lshift_func_int8_t_s_s)(int8_t left  )
{}
static int8_t
(safe_rshift_func_int8_t_s_u)(int8_t left  )
{}
static int16_t
(safe_add_func_int16_t_s_s)(  )
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
(safe_lshift_func_int16_t_s_s)(  )
{}
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
  int16_t
  g_697
  [9]
  [2]
  =
  {
{0x29D4L,
(-1L)},
{0x29D4L,
0x29D4L},
{0x29D4L,
(-1L)},
{0x29D4L,
0x29D4L},
{0x29D4L, (-1L)}, {0x29D4L,
0x29D4L},
{0x29D4L, (-1L)}, {0x29D4L,
0x29D4L},
{0x29D4L, (-1L)} };
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
    if (func_4 ((l_2[g_3] = func_6 (((0x9869L > (((int8_t)1))) <= l_2[g_3])))))
    {
      if ((((((((((uint32_t)1)) || 0xFDL) >= ((volatile uint32_t)1)) & ((uint32_t)1)) < ((((safe_rshift_func_int16_t_s_u (l_2[0] )) != ((-1L) <= (((int8_t)1)))) | ((int16_t)1)) < ((int16_t)1))) < l_2[g_3]) | g_344))
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
      else;
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
  int8_t
    l_3776
    =
    0xD9L;
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
      for
 (g_344
  =
  3;
  (g_344
   >=
   0);
  )
      {
 for
   (l_3776
    =
    4;
    (l_3776
     >=
     1);
    l_3776
    -=
    1)
 {
   {
    (safe_lshift_func_int16_t_s_u
       ((0x673E7ED6L > (g_71[7] = (!(safe_mul_func_int16_t_s_s (p_7, func_14 ( (((int32_t)1) & (safe_mod_func_uint16_t_u_u ( func_22 ( ))))  )))))) ));
  }
 }
      };
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
  if ((1L ^ (safe_lshift_func_int16_t_s_s ( ))))
  {
    if (((g_71[7] = func_42 ((((int8_t)1) & func_45 ((safe_add_func_int16_t_s_s ( )) , g_3, (((int32_t)1) > (((g_71[7] = ((int32_t)1)) >= g_2004[1][0][4]))), ((uint8_t)1))) )) >= 1UL))
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
  if ((0UL && ((((int8_t)1)))))
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
      uint32_t
 l_2284
 =
 4294967294UL;
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
(((0UL <= ((((safe_mod_func_uint8_t_u_u ((safe_mod_func_int8_t_s_s (((g_697[1][1] = (safe_mod_func_int8_t_s_s (((safe_sub_func_uint32_t_u_u ( (-1L))) || ((int32_t)1)), g_2004[0][0][2]))) == ((uint32_t)1)), ((int16_t)1))) )) >= l_2284)) < 1UL)) != g_2004[0][0][2]) == 0xDFL);
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
   ((safe_sub_func_int16_t_s_s ((safe_add_func_uint16_t_u_u ((0x02D3L | ((g_2004[0][0][2] = (l_2284 = g_697[8][0])) | (((((uint16_t)1) ^ ((uint32_t)1)) != ((65528UL && (((int8_t)1) < (((((((int32_t)1)) || (((uint16_t)1))) == ((uint8_t)1)) == p_50) && g_201))) && 65532UL)) >= p_48))) )) )) > p_50);
 (((safe_mul_func_int8_t_s_s ((safe_lshift_func_uint8_t_u_s ( (safe_add_func_uint8_t_u_u (p_46, ((((g_2004[6][0][8] && ((safe_mod_func_uint32_t_u_u (p_46, l_2307)) || ((((safe_rshift_func_int8_t_s_u (((safe_mul_func_int16_t_s_s (((safe_rshift_func_int16_t_s_u (((safe_add_func_uint16_t_u_u ((safe_lshift_func_int8_t_s_s (((((int32_t)1) ^ (p_48 == ((!((safe_add_func_uint8_t_u_u ((((((uint8_t)1)) >= g_1265[2][5]) > 0L), 0x7FL)) && ((uint16_t)1))) >= ((int32_t)1)))) & p_48) )) )) || 4294967288UL) )) != 0UL), p_50))) )) >= p_49) == l_2284) == ((int16_t)1)))) <= 0x7D15L) >= ((uint32_t)1)) < g_2004[6][0][1]))))) )) && p_50) & ((uint32_t)1));
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
