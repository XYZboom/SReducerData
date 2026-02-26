typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
static int8_t
(safe_rshift_func_int8_t_s_s)(int8_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
(safe_mod_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
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
(safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static uint16_t
(safe_add_func_uint16_t_u_u)( uint16_t ui2 )
{
  return ((uint16_t)1) + ui2;
}
static void
transparent_crc (  )
{}
static volatile uint16_t g_13 = 65527UL;
static uint8_t g_21[3] = {0xA5L, 0xA5L, 0xA5L};
static int16_t g_100 = 0x7EBAL;
static int16_t g_221 = 0L;
static uint32_t g_428 = 0x3AAD4235L;
static uint32_t g_654 = 0xAF7C65D6L;
static int32_t g_1018[2][8][10] = {{{0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}}, {{0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}}};
static int8_t g_1105 = (-1L);
static uint32_t g_1231 = 4294967295UL;
static uint8_t g_1603 = 0x44L;
static uint8_t g_2440 = 0x31L;
static uint32_t func_4(int16_t p_5);
static uint8_t func_6(int8_t p_7   );
static int8_t func_11(int32_t p_12);
static uint32_t func_17(int32_t p_18);
static int8_t func_22( uint8_t p_24);
static uint32_t func_1()
{
    uint32_t l_1393[8][6] = {{1UL, 1UL, 0xEE693CDAL, 1UL, 1UL, 0x7ADCF7E5L}, {1UL, 1UL, 0xEE693CDAL, 1UL, 1UL, 0x7ADCF7E5L}, {1UL, 1UL, 0xEE693CDAL, 1UL, 1UL, 0x7ADCF7E5L}, {1UL, 1UL, 0xEE693CDAL, 1UL, 1UL, 0x7ADCF7E5L}, {1UL, 1UL, 0xEE693CDAL, 1UL, 1UL, 0x7ADCF7E5L}, {1UL, 1UL, 0xEE693CDAL, 1UL, 1UL, 0x7ADCF7E5L}, {1UL, 1UL, 0xEE693CDAL, 1UL, 1UL, 0x7ADCF7E5L}, {1UL, 1UL, 0xEE693CDAL, 1UL, 1UL, 0x7ADCF7E5L}};
    g_1018[0][7][6] = (safe_rshift_func_int8_t_s_s((func_4(((((0x7CL < func_6(func_11((g_13 & (safe_sub_func_int32_t_s_s(((uint16_t)1), func_17(((safe_mod_func_int16_t_s_s(((g_21[2] ^ func_22( g_21[1])) && 0L), g_21[0])) <= l_1393[1][1]))))))   )) | l_1393[1][1]) ^ l_1393[1][3]) , 0xDC89L)) <= g_2440), 1));
    if (g_13)
    {
        for (g_654 = 0; (g_654 != 54); )
        {
            if (((uint8_t)1))
                break;
        };
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
    int8_t l_2412 = 0xDDL;
    int32_t l_2429[8] = {0x428E3B66L, 1L, 0x428E3B66L, 1L, 0x428E3B66L, 1L, 0x428E3B66L, 1L};
    int32_t l_2430 = 0xF4BE388BL;
    if (((((((+(((!((((l_2412 > (l_2430 = (((((uint8_t)1)) <= (l_2429[2] = (((uint8_t)1)))) <= g_1231))) || ((int32_t)1)) , g_1018[0][7][2]) < l_2412)) , ((int32_t)1)) == ((uint16_t)1))) <= 0x5CC1L) , ((int32_t)1)) && p_7) , p_7) == g_1105))
    {
        ((((int32_t)1) < (l_2430 = ((int32_t)1))) != (l_2429[1] > (safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u( (g_221 = ((((((((g_2440 && ((((uint16_t)1)) == g_1231)) == ((p_7 || (((1L >= p_7) <= p_7))) > ((uint8_t)1))) || 0xE7L)) != l_2429[0]) || ((uint32_t)1))) , g_1018[0][7][2])))), g_428)), p_7))));
    }
    else;
    return l_2429[2];
}
static int8_t func_11(int32_t p_12)
{
    uint32_t l_1624[6][3][2] = {{{0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}}, {{0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}}, {{0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}}, {{0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}}, {{0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}}, {{0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}}};
    for (; (((uint16_t)1) <= 6); )
    {
        if (g_654)
            break;
{
                        return l_1624[(g_100 + 1)][(g_1603 + 1)][g_1603];
                    }
};
return ((int32_t)1);
}
static uint32_t func_17(int32_t p_18)
{
    return ((int32_t)1);
}
static int8_t func_22( uint8_t p_24)
{
    for (; (g_428 <= 6); )
    {
        for (; (((int32_t)1) >= 0); )
        {
            {
            for (g_1105 = 1; (g_1105 >= 0); )
            ;;
            }
        };
    };
{
                        return ((int32_t)1);
                    }
}
int main ()
{
    func_1();
    transparent_crc(  );
    }