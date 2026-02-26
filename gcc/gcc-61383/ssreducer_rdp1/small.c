


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
(safe_mul_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
(safe_mod_func_int8_t_s_s)( int8_t si2 )
{
 
  return
    ((si2 == 0) || ((((int8_t)1) == (-128)) && (si2 == (-1)))) ?
    ((((int8_t)1))) :
    (((int8_t)1) % si2);
}
static int8_t
(safe_rshift_func_int8_t_s_u)( unsigned int right )
{}
static int16_t
(safe_lshift_func_int16_t_s_s)(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
(safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static uint8_t
(safe_sub_func_uint8_t_u_u)(uint8_t ui1  )
{
 
  return ui1 - ((uint8_t)1);
}
static uint8_t
(safe_mul_func_uint8_t_u_u)(uint8_t ui1  )
{}
static uint8_t
(safe_rshift_func_uint8_t_u_u)(uint8_t left  )
{}
static uint16_t
(safe_sub_func_uint16_t_u_u)(uint16_t ui1  )
{}
static uint16_t
(safe_mul_func_uint16_t_u_u)(uint16_t ui1  )
{
 
  return ((unsigned int)ui1) * ((unsigned int)((uint16_t)1));
}
static uint16_t
(safe_mod_func_uint16_t_u_u)(uint16_t ui1  )
{}
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
  uint32_t
  g_96
  =
  0x7709B807L;
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
  int16_t
  g_245
  =
  (-5L);
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
  int16_t
    l_6
    =
    0L;
  if (((!(~(func_2 ( g_7 ) < ((((0xB8B13202L < ((int32_t)1)) ^ ((0x498EL != (((int8_t)1))) < l_6))) == 0xBBEAEAA1L)))) >= 0xE521L))
  {
    }
  else
  {
    for
      (l_6
       =
       (-10);
       (l_6
 <=
 13);
       l_6
       =
       safe_add_func_int32_t_s_s
       (l_6,
 1));
    }
  g_21
    =
    ((((int32_t)1) < ((const int32_t)1)) || ((g_245 = (((int8_t)1) < (((uint32_t)1) | (((((uint32_t)1))) && ((int8_t)1))))) || 0xC351L));
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
    if ((func_22 ( (((1L & l_8) || ((((safe_sub_func_uint8_t_u_u (func_30 (func_33 ((safe_lshift_func_uint16_t_u_u (65535UL, (func_39 (((func_41 (func_46 (g_7)   ) ^ 4UL) & g_181)))))  ) ) )) && ((uint16_t)1)) && l_8) >= p_4)) & 0L)   ) && 0xBE6DL))
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
   )
{
  return
    ((int8_t)1);
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
      l_220
      =
      0xFB97F931L;
    if ((0x4F92L < (safe_lshift_func_int16_t_s_s ((((p_40 != (safe_lshift_func_uint16_t_u_u ((p_40 != (((((int8_t)1)) | ((safe_add_func_int8_t_s_s (((((l_220 = (safe_mod_func_int8_t_s_s ( p_40))) == (-3L)) != p_40) ^ p_40) )) >= ((uint16_t)1))) <= (-10L))), ((int32_t)1)))) || 0x282EL) != ((int32_t)1)), 6))))
    {
      if ((0x4F92L < (safe_lshift_func_int16_t_s_s ((((p_40 != (safe_lshift_func_uint16_t_u_u ((p_40 != (((((int8_t)1)) | ((safe_add_func_int8_t_s_s (((((l_220 = (safe_mod_func_int8_t_s_s ( p_40))) == (-3L)) != p_40) ^ p_40) )) >= ((uint16_t)1))) <= (-10L))), ((int32_t)1)))) || 0x282EL) != ((int32_t)1)), 6))))
    {
      if (l_220)
 break;
      if (((uint16_t)1))
 continue;
      }
    else
    {
      if ((p_40 <= ((!((!((int8_t)1)))) || (((int8_t)1)))))
      {
 if (g_245)
   break;
 if (((((int8_t)1)) | (((int32_t)1))))
 {
   for
     (0;
      (((int8_t)1)
       <=
       4);
      )
   ;;
   }
 else;
 }
      else;
      if ((safe_rshift_func_uint8_t_u_u ((safe_mul_func_uint16_t_u_u (((safe_add_func_int8_t_s_s (((l_220 = (safe_mod_func_uint16_t_u_u ((safe_rshift_func_int8_t_s_u ( (0UL == (safe_add_func_int8_t_s_s ((((((uint32_t)1)) & (((((p_40 >= ((((safe_sub_func_uint16_t_u_u (((safe_mul_func_uint8_t_u_u (((~((p_40 < ((safe_mul_func_int8_t_s_s ((~(g_181 = ((uint32_t)1))), p_40)) || (-1L))) | p_40))) ))) )) & ((uint32_t)1)) > 0xDFL) == (-10L))) < 3L) == 0L) < 1L) == p_40)) > 4294967295UL) ))))) ))) || 249UL) ))) )) )))
      {
 }
      else;
      if (((uint32_t)1))
 continue;
    }
      }
    else
    {
      if ((p_40 <= ((!((!((int8_t)1)))) || (((int8_t)1)))))
      {
 if (g_245)
   break;
 }
      else
      {
 if (p_40)
{{
      if (l_220)
 break;
      if (((uint16_t)1))
 continue;
      }
}
 if (((p_40 = (+(((int16_t)1)))) || ((int16_t)1)))
 {
   g_21
     =
     (((int8_t)1));
}
 else;
 }
    }
  }
  return
    ((uint32_t)1);
}
static uint16_t
func_41
  (int32_t
   p_42
   )
{
  return
    ((int32_t)1);
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
  g_21
    =
    ((uint8_t)1);
  g_21
    =
    ((safe_mul_func_int8_t_s_s (((uint32_t)1), (safe_add_func_int32_t_s_s (((safe_mul_func_uint16_t_u_u ((safe_mod_func_int8_t_s_s ( g_96)) )) & g_96), 0x38FB5A0EL)))) <= ((uint8_t)1));
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
  return
    0;
}
