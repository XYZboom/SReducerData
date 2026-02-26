typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
static int8_t
(safe_rshift_func_int8_t_s_s)(int8_t left  )
{
  return
    ((left < 0) || (((int)((int)1)) < 0) || (((int)((int)1)) >= 32))?
    ((left)) :
    (left >> ((int)((int)1)));
}
static int16_t
(safe_unary_minus_func_int16_t_s)(int16_t si )
{
  return
    -si;
}
static int16_t
(safe_mod_func_int16_t_s_s)(int16_t si1  )
{
  return
    ((((int16_t)1) == 0) || ((si1 == (-32767-1)) && (((int16_t)1) == (-1)))) ?
    ((si1)) :
    (si1 % ((int16_t)1));
}
static int16_t
(safe_rshift_func_int16_t_s_u)(int16_t left  )
{
  return
    ((left < 0) || (((unsigned int)((unsigned int)1)) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)((unsigned int)1)));
}
static int32_t
(safe_sub_func_int32_t_s_s)( int32_t si2 )
{
  return
    (((((int32_t)1)^si2) & (((((int32_t)1) ^ ((((int32_t)1)^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((((int32_t)1))) :
    (((int32_t)1) - si2);
}
static int32_t
(safe_mod_func_int32_t_s_s)( int32_t si2 )
{
  return
    ((si2 == 0) || ((((int32_t)1) == (-2147483647-1)) && (si2 == (-1)))) ?
    ((((int32_t)1))) :
    (((int32_t)1) % si2);
}
static uint8_t
(safe_mod_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
(safe_add_func_uint16_t_u_u)( uint16_t ui2 )
{
  return ((uint16_t)1) + ui2;
}
static uint16_t
(safe_sub_func_uint16_t_u_u)(uint16_t ui1  )
{
  return ui1 - ((uint16_t)1);
}
static uint16_t
(safe_lshift_func_uint16_t_u_u)( unsigned int right )
{
  return
    ((((unsigned int)right) >= 32) || (((uint16_t)1) > ((65535) >> ((unsigned int)right)))) ?
    ((((uint16_t)1))) :
    (((uint16_t)1) << ((unsigned int)right));
}
static int16_t g_100 = 0x7EBAL;
static uint8_t g_104 = 0xCAL;
static uint32_t g_654 = 0xAF7C65D6L;
static uint8_t g_763 = 247UL;
static uint32_t g_1100 = 0x77FCAF7DL;
static int8_t g_1105 = (-1L);
static uint32_t g_2244[9][2][3] = {{{4294967286UL, 4294967286UL, 0UL}, {4294967286UL, 4294967286UL, 0UL}}, {{4294967286UL, 4294967286UL, 0UL}, {4294967286UL, 4294967286UL, 0UL}}, {{4294967286UL, 4294967286UL, 0UL}, {4294967286UL, 4294967286UL, 0UL}}, {{4294967286UL, 4294967286UL, 0UL}, {4294967286UL, 4294967286UL, 0UL}}, {{4294967286UL, 4294967286UL, 0UL}, {4294967286UL, 4294967286UL, 0UL}}, {{4294967286UL, 4294967286UL, 0UL}, {4294967286UL, 4294967286UL, 0UL}}, {{4294967286UL, 4294967286UL, 0UL}, {4294967286UL, 4294967286UL, 0UL}}, {{4294967286UL, 4294967286UL, 0UL}, {4294967286UL, 4294967286UL, 0UL}}, {{4294967286UL, 4294967286UL, 0UL}, {4294967286UL, 4294967286UL, 0UL}}};
static uint32_t func_4(int16_t p_5);
static uint8_t func_6(int8_t p_7   );
static int8_t func_11(int32_t p_12);
static uint32_t func_17(int32_t p_18);
static int8_t func_22( uint8_t p_24);
static uint32_t func_1()
{
    (safe_rshift_func_int8_t_s_s((func_4(((((0x7CL < func_6(func_11((((volatile uint16_t)1) & (safe_sub_func_int32_t_s_s( func_17(((safe_mod_func_int16_t_s_s(((((uint8_t)1) ^ func_22( ((uint8_t)1))) && 0L) )) <= ((uint32_t)1)))))))   )) | ((uint32_t)1)) ^ ((uint32_t)1)) , 0xDC89L)) <= ((uint8_t)1)) ));
    if (((volatile uint16_t)1))
    {
        for (g_654 = 0; (g_654 != 54); g_654++);
        }
    else;
    return ((volatile int32_t)1);
}
static uint32_t func_4(int16_t p_5)
{
    return ((uint32_t)1);
}
static uint8_t func_6(int8_t p_7   )
{
    if (((((((+(((!((((((int8_t)1) > ((((((uint8_t)1)) <= ((((uint8_t)1)))) <= ((uint32_t)1)))) || ((int32_t)1)) , ((int32_t)1)) < ((int8_t)1))) , ((int32_t)1)) == ((uint16_t)1))) <= 0x5CC1L) , ((int32_t)1)) && p_7) , p_7) == g_1105))
    {
        ((((int32_t)1) < (((int32_t)1))) != (((int32_t)1) > (safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u( (((((((((((uint8_t)1) && ((((uint16_t)1)) == ((uint32_t)1))) == ((p_7 || (g_2244[1][0][1] = ((1L >= p_7) <= p_7))) > ((uint8_t)1))) || 0xE7L)) != ((int32_t)1)) || ((uint32_t)1))) , ((int32_t)1))))) )) ))));
    }
    else;
    return ((int32_t)1);
}
static int8_t func_11(int32_t p_12)
{
    uint32_t l_1624[6][3][2] = {{{0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}}, {{0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}}, {{0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}}, {{0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}}, {{0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}}, {{0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}}};
    for (; (((uint16_t)1) <= 6); )
    {
        if (g_654)
            break;
{
                        return l_1624[(g_100 + 1)][(((uint8_t)1) + 1)][((uint8_t)1)];
                    }
};
{
        {
        return ((uint8_t)1);
    }
        }
    }
static uint32_t func_17(int32_t p_18)
{
    return ((int32_t)1);
}
static int8_t func_22( uint8_t p_24)
{
    uint16_t l_1097[9][5][5] = {{{65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}}, {{65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}}, {{65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}}, {{65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}}, {{65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}}, {{65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}}, {{65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}}, {{65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}}, {{65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}}};
    for (; (((uint32_t)1) <= 6); )
    {
        if (((safe_sub_func_uint16_t_u_u((p_24 <= ((((0x5194L == (safe_mod_func_int32_t_s_s( (safe_lshift_func_uint16_t_u_u( ((safe_unary_minus_func_int16_t_s((((!(((g_763 = l_1097[7][3][0]) && ((((((((((g_763 , g_1100) ^ (((int8_t)1) & (((uint32_t)1)))) < ((uint8_t)1)) && l_1097[3][0][3]) , p_24) , ((uint32_t)1)) ^ 0L) , 0x00DEL) >= (-5L)) | ((int32_t)1))) < g_1105))) , p_24))) && p_24)))))) == ((int8_t)1)) & 0UL) & ((int16_t)1))) )) , (-1L)))
        {
            for (; (g_104 <= 4); )
            {
                for (; (g_1100 <= 1); )
                {
                    (((int32_t)1) ^ ((safe_mod_func_uint8_t_u_u(l_1097[(g_1100 + 7)][g_104][(g_1100 + 2)], (safe_lshift_func_uint16_t_u_u( 15)))) == (-2L)));
                    };
            };
        }
        else;
        for (; (((int32_t)1) >= 0); )
        {
            {
            for (g_1105 = 1; (g_1105 >= 0); )
            {
                for (; (((uint32_t)1) <= 6); )
                {
                    return ((uint32_t)1);
                };
                };
            }
        };
    };
}
int main ()
{
    func_1();
    return 0;
}