
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
static int8_t
(safe_unary_minus_func_int8_t_s)(int8_t si )
{
  return
    -si;
}
static int8_t
(safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    (si1 + si2);
}
static int8_t
(safe_mod_func_int8_t_s_s)(int8_t si1  )
{
  return
    ((((int8_t)1) == 0) || ((si1 == (-128)) && (((int8_t)1) == (-1)))) ?
    ((si1)) :
    (si1 % ((int8_t)1));
}
static int8_t
(safe_lshift_func_int8_t_s_s)(int8_t left  )
{
  return
    ((left < 0) || (((int)((int)1)) < 0) || (((int)((int)1)) >= 32) || (left > ((127) >> ((int)((int)1))))) ?
    ((left)) :
    (left << ((int)((int)1)));
}
static int8_t
(safe_lshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
(safe_rshift_func_int8_t_s_s)( int right )
{
  return
    ((((int8_t)1) < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((((int8_t)1))) :
    (((int8_t)1) >> ((int)right));
}
static int16_t
(safe_unary_minus_func_int16_t_s)(int16_t si )
{}
static int16_t
(safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    (si1 + si2);
}
static int16_t
(safe_lshift_func_int16_t_s_s)(int16_t left  )
{
  return
    ((left < 0) || (((int)((int)1)) < 0) || (((int)((int)1)) >= 32) || (left > ((32767) >> ((int)((int)1))))) ?
    ((left)) :
    (left << ((int)((int)1)));
}
static int32_t
(safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static uint8_t
(safe_add_func_uint8_t_u_u)(uint8_t ui1  )
{
  return ui1 + ((uint8_t)1);
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
(safe_rshift_func_uint8_t_u_s)(uint8_t left  )
{
  return
    ((((int)((int)1)) < 0) || (((int)((int)1)) >= 32)) ?
    ((left)) :
    (left >> ((int)((int)1)));
}
static uint16_t
(safe_add_func_uint16_t_u_u)(uint16_t ui1  )
{}
static uint16_t
(safe_sub_func_uint16_t_u_u)(uint16_t ui1  )
{
  return ui1 - ((uint16_t)1);
}
static uint16_t
(safe_mod_func_uint16_t_u_u)( uint16_t ui2 )
{}
static uint16_t
(safe_lshift_func_uint16_t_u_u)(uint16_t left  )
{
  return
    ((((unsigned int)((unsigned int)1)) >= 32) || (left > ((65535) >> ((unsigned int)((unsigned int)1))))) ?
    ((left)) :
    (left << ((unsigned int)((unsigned int)1)));
}
static uint16_t
(safe_rshift_func_uint16_t_u_s)(uint16_t left  )
{}
static uint32_t
(safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return ui1 + ui2;
}
static uint32_t
(safe_sub_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return ui1 - ui2;
}
static uint32_t
(safe_mod_func_uint32_t_u_u)(uint32_t ui1  )
{
  return
    (((uint32_t)1) == 0) ?
    ((ui1)) :
    (ui1 % ((uint32_t)1));
}
static int8_t g_4 = (-1L);
static uint16_t g_63 = 65532UL;
static int16_t g_188 = 0x3C2DL;
static uint16_t g_538 = 0x2A52L;
static uint32_t g_540 = 0x03F238A4L;
static uint16_t g_813[7][1] = {{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}};
static int32_t g_1215[6] = {0x2F236E6CL,0x2F236E6CL,1L,0x2F236E6CL,0x2F236E6CL,1L};
static uint8_t func_6(uint32_t p_7);
static uint16_t func_8(int16_t p_9);
static int32_t func_15( int8_t p_17   );
static int32_t func_1()
{
    if ((((((uint16_t)1)) | ((uint32_t)1)) != func_6((((g_813[3][0] = func_8(((uint32_t)1))) || (!(((uint32_t)1) <= 1UL)))))));
}
static uint8_t func_6(uint32_t p_7)
{
    return ((int16_t)1);
}
static uint16_t func_8(int16_t p_9)
{
    int32_t l_26 = 0xD437F1BDL;
    int32_t l_27 = 1L;
    (((safe_add_func_uint8_t_u_u(((((-5L)) & (safe_mod_func_uint8_t_u_u((0x68L ^ (func_15( (((g_4) >= ((l_27 = (g_4 == (l_26 = ((p_9 != (p_9 ^ (-1L))) == (safe_mod_func_int32_t_s_s(((~g_4) < p_9), g_4)))))) < g_4)) > p_9)   ) | 4294967295UL)), ((int8_t)1))))) )) == g_4) <= 0L);
    if (g_540)
    {
        int32_t l_1179 = 0xF7BD02E2L;
        uint32_t l_1288 = 0x20D07CB7L;
        if ((((int32_t)1)))
        {
            for (p_9 = 0; (p_9 <= (-19)); )
            ;;
        }
                                            for (l_1288 = 0; (l_1288 <= 49); l_1288 = safe_add_func_uint32_t_u_u(l_1288, 8))
        {
            {
                uint32_t l_1423 = 0xE576516EL;
                uint8_t l_1527 = 6UL;
                if ((safe_lshift_func_int8_t_s_u((p_9 && 0xDCE4L), (safe_lshift_func_int8_t_s_u((((safe_sub_func_uint16_t_u_u(((l_27 < (((((((g_63 = (!(safe_lshift_func_int8_t_s_s((!((safe_add_func_int8_t_s_s((((int32_t)1) > 0xB5EEL), p_9)) || (p_9 && (0xDC53108EL > (safe_unary_minus_func_int16_t_s((((safe_rshift_func_uint16_t_u_s((l_1179 = (safe_mod_func_int32_t_s_s(((safe_add_func_uint16_t_u_u((0x6B50CB0AL | p_9) )) < 0x1DL), 0xBC2AB98CL))) )) == 0x0979578BL) == ((int16_t)1)))))))) )))) == ((uint16_t)1)) == 0UL) && (-10L)) || l_1423) ^ 1UL) < 0xE469L))) ))) ^ 0xAFL), 2)))))
                {
                    if (p_9)
                    {
                        ((((int8_t)1)) & (((((int32_t)1)) == (((~0xEE002086L) & (((g_63 = 2UL) > (0x60L > 0UL)))) < (0xF6L || (((int16_t)1))))) == ((((-10L)) != 0x26A5L))));
                    }
                    else;
                    }
                else
                {
                    int32_t BGgGgcl_26 = (~(((~(((~(((((int16_t)1) && ((uint8_t)1)) << ((~(((int8_t)1))) && l_26)))) | (~(l_1423))))) && ((((((uint16_t)1) + (((uint8_t)1) >> ((int8_t)1))) || ((int16_t)1)) + ((int32_t)1)) << (((uint32_t)1) / ((int16_t)1))))));
uint16_t BGgGgfl_1401 = (~(((((~(((uint8_t)1))) && ((~((((int16_t)1) && ((uint32_t)1)))) % (~(l_26)))) + (BGgGgcl_26 % (~((((int8_t)1) / ((uint8_t)1)))))) || (((((int16_t)1) & l_1423) % ((uint16_t)1)) && (~(((((int16_t)1) - (((int8_t)1) && ((int32_t)1))) && ((~(((uint8_t)1))) + (~(((int16_t)1)))))))))));
l_1423 = (~(((~((~((~((((~(BGgGgfl_1401)) % (~(((int8_t)1)))) + ((int32_t)1)))))))) / (~((((BGgGgcl_26 && l_1423) >> (~((~(((uint8_t)1)))))) & (((((((uint32_t)1) && ((int8_t)1)) + (~(((uint16_t)1)))) - ((uint8_t)1)) ^ ((((int16_t)1) - l_26) - ((uint8_t)1))) || (((int16_t)1) % (((int16_t)1) | ((int16_t)1))))))))));
if((!g_538)){
printf("l_1179=%lld\n", (long long)l_1179);
break;
}
}
                                               (((((((((((((int32_t)1) <= ((safe_mod_func_uint32_t_u_u((((((((0L ^ ((safe_lshift_func_int16_t_s_s((((safe_add_func_int16_t_s_s(1L, (p_9 = (safe_sub_func_uint32_t_u_u((((((int32_t)1) & (!(p_9 < ((((0x60781BCDL >= (safe_mod_func_int32_t_s_s((((safe_mod_func_int32_t_s_s((((int16_t)1) || ((((((((int16_t)1)) ^ ((uint16_t)1)) ^ ((int32_t)1))) < l_1423) & 0xCC6EBE87L)), p_9)) > 0xB5L) | 0UL), p_9))) != p_9) ^ 4294967287UL) <= p_9)))) > l_27) && g_540), l_1423))))) || ((uint16_t)1)) ^ l_26) )) || p_9)) && 0x6EL) != ((int32_t)1)) >= ((int32_t)1)) < 0x0103082AL)) & 1L) )) >= g_63)) != g_540)) | ((int32_t)1)) == ((int8_t)1)) ^ 0xF2A5F255L) <= 0xB1BFL) != (-1L)) & ((int32_t)1)) ^ (-1L)));
                                                       if (((int32_t)1))
                    (safe_add_func_uint16_t_u_u(((((uint32_t)1)) < (!(safe_rshift_func_uint8_t_u_s(((l_1179 = ((int32_t)1)) < (safe_rshift_func_int8_t_s_s( (safe_mod_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((((uint8_t)1)) & ((((~(safe_add_func_int16_t_s_s(((g_813[1][0] | (((int32_t)1) >= ((safe_add_func_uint8_t_u_u(((p_9 | (l_26 = (((safe_rshift_func_uint8_t_u_s((((((safe_mod_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((((int16_t)1)), g_1215[4])) != (-3L)), l_1527)) > 1UL) & ((int8_t)1)) | p_9) > 2L) ))) | ((int32_t)1)))) >= ((uint16_t)1)) )) && 0xFBL))) ^ 1UL), ((uint8_t)1)))) < 1UL) == 0x4EL) && ((int32_t)1))) )) ))))) )))) ));
                }
        }
    }
    else
    {
        uint16_t l_2239[9][7][4] = {{{8UL,0x260EL,0xC0A7L,65526UL},{0xE758L,4UL,65526UL,0UL},{65526UL,0UL,65532UL,0UL},{0x9015L,4UL,1UL,65526UL},{9UL,0x260EL,0UL,0x3A76L},{1UL,0x9015L,8UL,8UL},{1UL,1UL,0UL,8UL}},{{9UL,8UL,1UL,0x260EL},{0x9015L,0xE758L,65532UL,1UL},{65526UL,0xE758L,65526UL,0x260EL},{0xE758L,8UL,0xC0A7L,8UL},{8UL,1UL,0x9015L,8UL},{0x3A76L,0x9015L,0x9015L,0x3A76L},{8UL,0x260EL,0xC0A7L,65526UL}},{{0xE758L,4UL,65526UL,0UL},{65526UL,0UL,65532UL,0UL},{0x9015L,4UL,1UL,65526UL},{9UL,0x260EL,0UL,0x3A76L},{1UL,0x9015L,8UL,8UL},{1UL,1UL,0UL,8UL},{9UL,8UL,1UL,0x260EL}},{{0x9015L,0xE758L,65532UL,1UL},{65526UL,0xE758L,65526UL,0x260EL},{0xE758L,8UL,0xC0A7L,8UL},{8UL,1UL,0x9015L,8UL},{0x3A76L,0x9015L,0x9015L,0x3A76L},{8UL,0x260EL,0xC0A7L,65526UL},{0xE758L,4UL,65526UL,0UL}},{{65526UL,0UL,65532UL,0UL},{0x9015L,4UL,1UL,65526UL},{9UL,0x260EL,0UL,0x3A76L},{1UL,0x9015L,8UL,8UL},{1UL,1UL,0UL,8UL},{9UL,8UL,1UL,0x260EL},{0x9015L,0xE758L,65532UL,1UL}},{{65526UL,0xE758L,65526UL,0x260EL},{0xE758L,8UL,0xC0A7L,8UL},{8UL,1UL,0x9015L,8UL},{0x3A76L,0x9015L,0x9015L,0x3A76L},{8UL,0x260EL,0xC0A7L,65526UL},{0xE758L,4UL,65526UL,0UL},{65526UL,0UL,65532UL,0UL}},{{0x9015L,4UL,1UL,65526UL},{9UL,0x260EL,0UL,0x3A76L},{1UL,0x9015L,8UL,8UL},{1UL,1UL,0UL,0x260EL},{65526UL,0x9015L,0UL,4UL},{0x3A76L,8UL,9UL,0UL},{8UL,8UL,8UL,4UL}},{{8UL,0x9015L,65532UL,0x260EL},{0x260EL,0UL,0x3A76L,0x9015L},{1UL,0x3A76L,0x3A76L,1UL},{0x260EL,4UL,65532UL,8UL},{8UL,0xC0A7L,8UL,0xE758L},{8UL,0xE758L,9UL,0xE758L},{0x3A76L,0xC0A7L,0UL,8UL}},{{65526UL,4UL,0xE758L,1UL},{0UL,0x3A76L,0x9015L,0x9015L},{0UL,0UL,0xE758L,0x260EL},{65526UL,0x9015L,0UL,4UL},{0x3A76L,8UL,9UL,0UL},{8UL,8UL,8UL,4UL},{8UL,0x9015L,65532UL,0x260EL}}};
        {
            uint8_t l_1955[3];
            uint16_t l_2240 = 0UL;
{
            l_26 = (((safe_mod_func_uint16_t_u_u( (safe_add_func_int8_t_s_s((((g_813[2][0] = (safe_sub_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s((((((((uint16_t)1)) > ((l_2239[3][2][0] < (((uint32_t)1) ^ l_2240)))) & ((safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((((safe_add_func_uint16_t_u_u((((uint32_t)1) <= (g_4 = (safe_mod_func_int32_t_s_s(l_1955[1], g_188)))) )) < 1UL)), 0x9CFB623FL)) )) <= ((int16_t)1))) >= 0x2C3CBB80L) > g_188))) ))) <= l_2239[5][4][1]) ^ 0xF637093EL), ((uint16_t)1))))) < g_188));
        }
                    }
    }
                    return p_9;
}
static int32_t func_15( int8_t p_17   )
{
    return ((uint32_t)1);
}
int main (int argc, char* argv[])
{
    func_1();
    }