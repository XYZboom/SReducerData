


typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;

typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;


static int8_t
(safe_add_func_int8_t_s_s)(int8_t si1  )
{
 
  return
    (si1 + ((int8_t)1));
}
static int8_t
(safe_sub_func_int8_t_s_s)(int8_t si1  )
{
 
  return
    (si1 - ((int8_t)1));
}
static int8_t
(safe_mod_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
(safe_lshift_func_int8_t_s_s)(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
(safe_sub_func_int16_t_s_s)( int16_t si2 )
{
 
  return
    (((int16_t)1) - si2);
}
static int16_t
(safe_lshift_func_int16_t_s_s)(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
(safe_lshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
(safe_rshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
(safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
(safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static uint8_t
(safe_sub_func_uint8_t_u_u)(uint8_t ui1  )
{
 
  return ui1 - ((uint8_t)1);
}
static uint8_t
(safe_mod_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
(safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
(safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
(safe_lshift_func_uint16_t_u_s)(uint16_t left  )
{}
static uint16_t
(safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
(safe_rshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
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
  int8_t
  g_7
  =
  (-6L);
static
  int32_t
  g_21
  =
  0L;
static
  int32_t
  g_75
  =
  0x4C99FFFBL;
static
  uint16_t
  g_94
  =
  0x8AA1L;
static
  uint32_t
  g_129
  =
  9UL;
static
  uint8_t
  g_176
  =
  0x44L;
static
  int8_t
  g_181
  =
  0L;
static
  int32_t
  g_1039
  =
  0x6D312621L;
static
  uint32_t
  g_1504
  =
  4294967295UL;
static
  uint16_t
func_1
();
static
  int32_t
func_2
(
uint8_t
p_4
);
static
  uint16_t
func_22
(
int8_t
p_24
,
int8_t
p_26
);
static
  const
  uint8_t
func_30
(int16_t
p_31
);
static
  int16_t
func_33
(uint16_t
p_34
);
static
  uint16_t
func_39
(int8_t
p_40
);
static
  uint16_t
func_41
(int32_t
p_42
);
static
  int32_t
func_46
(uint32_t
p_47
);
static
  uint16_t
func_50
(
int32_t
p_54
);
static uint16_t
func_1 ()
{
  uint16_t
    l_1503
    =
    0x4FC1L;
  uint32_t
    l_2192
    =
    0x7FB453E7L;
  if (((!(~(func_2 ( g_7 ) < ((g_1504 = ((0xB8B13202L < g_1039) ^ ((0x498EL != (safe_lshift_func_int8_t_s_s ((safe_mod_func_uint8_t_u_u (((((l_1503 = (((uint8_t)1))) != (-1L)) && 0x53L) ^ 1L), g_1039)), 6))) < ((int16_t)1)))) == 0xBBEAEAA1L)))) >= 0xE521L))
  {
    }
  else;
  g_21
    =
    ((((int32_t)1) < ((const int32_t)1)) || (((((int8_t)1) < (((uint32_t)1) | (((safe_mod_func_uint32_t_u_u ((safe_rshift_func_uint16_t_u_u (((g_181 = (g_1504 == ((((!((l_1503 != ((safe_lshift_func_int8_t_s_s (((((int16_t)1)) <= g_1039), l_2192)) || 0x5850L)) >= ((int8_t)1))) == 4294967290UL) > ((int16_t)1)) & ((uint32_t)1)))) & l_2192), ((uint8_t)1))), g_75))) && ((int8_t)1))))) || 0xC351L));
  }
static int32_t
func_2
  (
   uint8_t
   p_4
   )
{
  uint32_t
    l_8
    =
    0x4F147909L;
  lbl_988:
  l_8 = g_7;
  for
    (p_4
     =
     (-8);
     (p_4
      >=
      53);
     )
  {
    g_21
      =
      (safe_mul_func_uint16_t_u_u
       ((((uint8_t)1)), (safe_mul_func_uint16_t_u_u (p_4, (safe_rshift_func_int16_t_s_u (g_7, 0))))));
    if ((func_22 ( (((1L & l_8) || ((((safe_sub_func_uint8_t_u_u (func_30 (func_33 ((safe_lshift_func_uint16_t_u_u (65535UL, (func_39 (((func_41 (func_46 (g_7)   ) ^ 4UL) & g_181)))))  ) ) )) && g_94) && l_8) >= p_4)) & 0L) , l_8 ) && 0xBE6DL))
    {
      return
 ((uint8_t)1);
    }
    else;
  };
  }
static uint16_t
func_22
  (
   int8_t
   p_24
   ,
   int8_t
   p_26
   )
{
  return
    p_26;
}
static const uint8_t
func_30
  (int16_t
   p_31
   )
{
  return
    ((int32_t)1);
}
static int16_t
func_33
  (uint16_t
   p_34
   )
{
  return
    p_34;
}
static uint16_t
func_39
  (int8_t
   p_40
)
{
  for
    (g_176
     =
     0;
     (g_176
      <
      12);
     g_176
     =
     safe_add_func_int32_t_s_s
     (g_176,
      3))
  {
    int32_t
      l_218
      =
      (-5L);
    int32_t
      l_220
      =
      0xFB97F931L;
    if ((0x4F92L < (safe_lshift_func_int16_t_s_s ((((p_40 != (safe_lshift_func_uint16_t_u_u ((p_40 != (((((int8_t)1)) | ((safe_add_func_int8_t_s_s (((((l_220 = (safe_mod_func_int8_t_s_s ((((safe_rshift_func_int16_t_s_u ((-2L), ((((((((int8_t)1)) || p_40) & 1L) > 0UL) || p_40) != 7L))) == 0xC58CL) == p_40), p_40))) == (-3L)) != p_40) ^ p_40) )) >= g_94)) <= (-10L))), l_218))) || 0x282EL) != l_218), 6))))
    {
      }
    else
    {
      if ((p_40 <= ((!((!((int8_t)1)))) || (safe_lshift_func_int8_t_s_s ((((+(safe_add_func_int8_t_s_s (((-1L)) ))) ^ (-4L)) >= 1L), p_40)))))
      {
 }
      else
      {
 if (p_40)
{{
      if (l_220)
 break;
      }
}
 }
    }
  }
  return
    g_129;
}
static uint16_t
func_41
  (int32_t
   p_42
   )
{
  int32_t
    l_200
    =
    0x01793202L;
  l_200
    =
    ((~
      (g_129
       &&
       l_200)));
  return
    l_200;
}
static int32_t
func_46
  (uint32_t
   p_47
)
{
  (safe_lshift_func_uint16_t_u_s
     (func_50
      (
       p_47) ));
  return
    ((int32_t)1);
}
static uint16_t
func_50
  (
   int32_t
   p_54
)
{
  int32_t
    l_110
    =
    (-1L);
  g_21
    =
    (safe_lshift_func_int16_t_s_u
     ((safe_mod_func_uint32_t_u_u ((~(((!(safe_sub_func_int32_t_s_s ((((((((int32_t)1) == (-8L)) && l_110) <= (safe_mod_func_uint8_t_u_u ((safe_sub_func_int8_t_s_s ((((uint32_t)1) && (g_94 | (p_54 = (safe_mul_func_uint16_t_u_u (((((safe_rshift_func_uint8_t_u_u ((safe_sub_func_int16_t_s_s ( (safe_add_func_int32_t_s_s (((g_7 = 5L) ^ ((uint8_t)1)), g_75)))), 1)) >= 0x5F07L) && (-7L)) > 5UL), g_21))))) )), ((int16_t)1)))) ^ ((uint8_t)1)) <= (-1L)), l_110))) ^ 1UL) | ((uint32_t)1))), g_21)), 14));
  return
    p_54;
}
int
main
  (int
   argc,
   char
   *argv
   []
)
{
  func_1
    ();
  }
