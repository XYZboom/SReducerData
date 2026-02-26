
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
static int8_t
(safe_lshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
(safe_rshift_func_int8_t_s_s)(int8_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
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
(safe_mod_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
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
(safe_rshift_func_int16_t_s_s)(int16_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
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
static int32_t
(safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static uint8_t
(safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return ui1 + ui2;
}
static uint8_t
(safe_sub_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return ui1 - ui2;
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
(safe_lshift_func_uint8_t_u_s)(uint8_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
(safe_lshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
(safe_rshift_func_uint8_t_u_s)(uint8_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
(safe_add_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return ui1 + ui2;
}
static uint16_t
(safe_sub_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return ui1 - ui2;
}
static uint16_t
(safe_mod_func_uint16_t_u_u)( uint16_t ui2 )
{}
static uint16_t
(safe_lshift_func_uint16_t_u_s)(uint16_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
(safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
(safe_rshift_func_uint16_t_u_s)(uint16_t left  )
{}
static uint16_t
(safe_rshift_func_uint16_t_u_u)(  )
{}
static uint32_t
(safe_unary_minus_func_uint32_t_u)(uint32_t ui )
{
  return -ui;
}
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
(safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static int8_t g_4 = (-1L);
static uint8_t g_12 = 0UL;
static int32_t g_22 = 0x5EE56E31L;
static uint16_t g_63 = 65532UL;
static int8_t g_83 = (-1L);
static uint32_t g_103 = 1UL;
static uint16_t g_172[9] = {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL};
static uint8_t g_173 = 1UL;
static int16_t g_188 = 0x3C2DL;
static uint8_t g_217 = 0x25L;
static int32_t g_247 = 7L;
static uint16_t g_315 = 0x66F1L;
static uint32_t g_359[10][7] = {{0x3FA7BD63L,0x3FA7BD63L,4294967295UL,1UL,2UL,4294967286UL,0x86D169E2L},{4294967286UL,4294967295UL,2UL,0xEBBF1EA3L,4294967295UL,0UL,0xD3F18FECL},{4294967295UL,0xB191E2DDL,0x894467B8L,4294967295UL,2UL,0xD3F18FECL,0x3FA7BD63L},{1UL,0xC4126F55L,0xC6494F46L,0x70286BD2L,0xEF9FE435L,0xEF9FE435L,0x70286BD2L},{4294967291UL,0xC4126F55L,4294967291UL,0x3FA7BD63L,0xD3F18FECL,2UL,4294967295UL},{0UL,0xB191E2DDL,0xB191E2DDL,4294967291UL,0xD4A24541L,0xB2788A97L,0UL},{1UL,0xC6494F46L,0xD3F18FECL,1UL,2UL,1UL,4294967295UL},{0x86D169E2L,4294967295UL,2UL,0xD4A24541L,1UL,0xD3F18FECL,1UL},{0xB191E2DDL,2UL,2UL,0xB191E2DDL,4294967286UL,4294967291UL,0xD3F18FECL},{1UL,4294967295UL,0xD3F18FECL,2UL,0xC4126F55L,0xD4A24541L,0xAF15F833L}};
static int8_t g_361 = 0xE8L;
static uint16_t g_538 = 0x2A52L;
static uint32_t g_540 = 0x03F238A4L;
static int16_t g_543[3] = {0xA684L,0xA684L,0xA684L};
static uint16_t g_813[7][1] = {{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}};
static int16_t g_866[8][10] = {{0xE09DL,0L,0x2212L,0x2212L,0L,0xE09DL,(-1L),0x4458L,0L,0x4458L},{0xF029L,0x2212L,0L,0x98E1L,0L,0x2212L,0xF029L,(-1L),0x1ED0L,0x1ED0L},{0xF029L,0x1ED0L,0xE09DL,0L,0L,0xE09DL,0x1ED0L,0xF029L,0L,(-1L)},{0xE09DL,0x1ED0L,0xF029L,0L,(-1L),0L,0xF029L,0x1ED0L,0xE09DL,0L},{0L,0x2212L,0xF029L,(-1L),0x1ED0L,0x1ED0L,(-1L),0xF029L,0x2212L,0L},{0x2212L,0L,0xE09DL,(-1L),0x4458L,0L,0x4458L,(-1L),0xE09DL,0L},{0L,0xF029L,0L,0L,0x4458L,0x98E1L,0x98E1L,0x4458L,0L,0L},{0x4458L,0x4458L,0x2212L,0L,0x1ED0L,0x98E1L,0xE09DL,0x98E1L,0x1ED0L,0L}};
static int32_t g_949[3][9][9] = {{{0x19FE0FA4L,0x004CDDF9L,0xA2352584L,1L,4L,(-1L),(-1L),(-4L),0xB51D2F47L},{0x02FF677CL,0xFB20F18DL,0x3FD00C3BL,4L,4L,0x3FD00C3BL,0xFB20F18DL,0x02FF677CL,0xA2352584L},{0L,0L,0x3C1CCF04L,0L,4L,0L,4L,0x80CBB97EL,1L},{0x94A69707L,(-4L),0x2773E334L,0x80CBB97EL,0x004CDDF9L,0x5E55A83DL,(-1L),(-7L),0xA2352584L},{(-1L),0xB7AAB78DL,2L,(-1L),0x7E126A91L,(-5L),1L,0L,0xB51D2F47L},{0x19FE0FA4L,0x94A69707L,0xC2B10BA8L,(-1L),(-1L),0L,0x19FE0FA4L,(-4L),(-1L)},{0xA537F120L,3L,0x0F8F2D30L,0x80CBB97EL,0L,0x3FD00C3BL,6L,0xA537F120L,0x1374F73BL},{0x04754667L,(-1L),0xA2352584L,0L,1L,0L,0xDE5814CDL,5L,0xF3A357CCL},{4L,5L,1L,1L,8L,4L,5L,0x765C689EL,0xA537F120L}},{{0L,0x62F880C4L,1L,0x514180D2L,0x62F880C4L,0x04754667L,0x004628F1L,1L,6L},{0x622710D1L,0x0710E789L,0xA537F120L,1L,0x1FC49A14L,1L,4L,0L,4L},{5L,(-5L),0L,0xA5559F9FL,0x3772736DL,1L,0x004628F1L,5L,3L},{0x9C3268C6L,0L,3L,0L,(-5L),0L,5L,5L,0L},{0x87EFAE68L,0L,0xB7AAB78DL,0L,0x87EFAE68L,4L,0xDE5814CDL,0x0B2B9C01L,0x04754667L},{5L,(-5L),4L,0x514180D2L,0x004628F1L,0x02FF677CL,1L,0L,0x7E126A91L},{4L,0x0710E789L,0x62D64424L,(-3L),1L,4L,0x0710E789L,0x1FC49A14L,4L},{0x11A29F7FL,0x62F880C4L,(-2L),0xDE5814CDL,0xA5559F9FL,0L,0x004628F1L,0x11A29F7FL,0L},{0x11A29F7FL,5L,0xA537F120L,0x11A29F7FL,(-5L),1L,0x1FC49A14L,0L,(-1L)}},{{4L,0x1FC49A14L,0xB7AAB78DL,0xA5559F9FL,0x52EAD88AL,1L,1L,0x765C689EL,3L},{5L,0xB2702615L,0x7E126A91L,0x0B2B9C01L,(-5L),0x04754667L,0x61EF5EBCL,0L,0xFB20F18DL},{0x87EFAE68L,0x622710D1L,0x02FF677CL,1L,0xA5559F9FL,4L,6L,0xA5559F9FL,0xFB20F18DL},{0x9C3268C6L,(-5L),(-1L),0xDE5814CDL,1L,0L,1L,0x9C3268C6L,3L},{5L,5L,0x62D64424L,(-3L),0x004628F1L,(-2L),5L,0x1FC49A14L,(-1L)},{0x622710D1L,0xA5559F9FL,1L,0xDE5814CDL,0x87EFAE68L,(-4L),1L,1L,0L},{0L,0x61EF5EBCL,4L,1L,(-5L),0L,(-5L),1L,4L},{4L,4L,0x02FF677CL,0x0B2B9C01L,0x3772736DL,1L,8L,0x1FC49A14L,0x7E126A91L},{0x9C3268C6L,0xB2702615L,0xF3A357CCL,0xA5559F9FL,0x1FC49A14L,0L,0x61EF5EBCL,0x9C3268C6L,0x04754667L}}};
static int16_t g_974 = (-1L);
static uint8_t g_1129 = 252UL;
static int32_t g_1215[6] = {0x2F236E6CL,0x2F236E6CL,1L,0x2F236E6CL,0x2F236E6CL,1L};
static uint8_t g_1460 = 0x4FL;
static uint16_t g_3261 = 0x2ECEL;
static uint8_t func_6(uint32_t p_7);
static uint16_t func_8(int16_t p_9);
static int32_t func_15( int8_t p_17   );
static int32_t func_1()
{
    uint32_t l_5[6][7] = {{0x327439CBL,0xB03629AAL,0UL,0UL,0xB03629AAL,0x327439CBL,2UL},{1UL,0UL,0x91F782A1L,2UL,1UL,1UL,2UL},{0xFE4B2830L,0x1D2250DBL,0xFE4B2830L,7UL,2UL,1UL,0x327439CBL},{0x91F782A1L,0UL,1UL,7UL,1UL,0UL,0x91F782A1L},{0UL,0xB03629AAL,0x327439CBL,2UL,0UL,1UL,0UL},{0UL,0UL,0UL,0UL,0xFE4B2830L,1UL,7UL}};
    int32_t l_2266[5];
    if ((((safe_lshift_func_uint16_t_u_s(g_4, 8)) | l_5[1][6]) != func_6((l_2266[3] = ((g_813[3][0] = func_8(l_5[1][6])) || (!(l_5[1][6] <= 1UL)))))));
}
static uint8_t func_6(uint32_t p_7)
{
    int16_t l_2267 = 0x1B23L;
    return l_2267;
}
static uint16_t func_8(int16_t p_9)
{
    uint16_t l_21 = 0xEB38L;
    int32_t l_26 = 0xD437F1BDL;
    int32_t l_27 = 1L;
    int8_t l_28 = 0x24L;
    int32_t l_975[3][1];
    uint16_t l_1001 = 0x0784L;
    uint16_t l_1077 = 0x3CE7L;
    int8_t l_1359[7] = {0L,0xD9L,0L,0L,0xD9L,0L,0L};
    int8_t l_1434 = 2L;
    int16_t l_1631 = 0xB5F5L;
    int32_t l_1633 = 0xE2E5D52BL;
    uint16_t l_1956 = 8UL;
    int16_t l_2163 = 0x991BL;
    l_975[0][0] = (((safe_add_func_uint8_t_u_u((g_974 = ((g_12 = (-5L)) & (safe_mod_func_uint8_t_u_u((0x68L ^ (func_15( (((g_22 = g_4) >= ((l_27 = (g_4 == (l_26 = ((p_9 != (p_9 ^ (-1L))) == (safe_mod_func_int32_t_s_s(((~g_4) < p_9), g_4)))))) < g_4)) > p_9)   ) | 4294967295UL)), l_28)))), 3L)) == g_4) <= 0L);
    if (g_540)
    {
        int32_t l_982 = (-1L);
        int32_t l_987 = 0xB0431CEDL;
        int32_t l_1000[3][7] = {{0x510B92E6L,0x510B92E6L,3L,0x510B92E6L,0x510B92E6L,3L,0x510B92E6L},{0x510B92E6L,0x285A33BBL,0x285A33BBL,0x510B92E6L,0x285A33BBL,0x285A33BBL,0x510B92E6L},{0x285A33BBL,0x510B92E6L,0x285A33BBL,0x285A33BBL,0x510B92E6L,0x285A33BBL,0x285A33BBL}};
        uint16_t l_1153 = 0x1594L;
        int32_t l_1179 = 0xF7BD02E2L;
        int16_t l_1271 = 0x809CL;
        uint32_t l_1288 = 0x20D07CB7L;
        int32_t l_1450 = 0xAAB2BE5DL;
        int32_t l_1574[10][5][5]                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        ;
        if ((safe_sub_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u((l_1001 = (safe_add_func_uint32_t_u_u(((((g_217 = (l_982 == (g_315 = (0x1527L != ((((((safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(p_9, (l_987 = 0x122DL))), 0xAF5DB42CL)) < (7L < g_949[2][8][7])) <= p_9) > ((((((safe_mod_func_int8_t_s_s(((((l_1000[1][6] = ((safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int16_t_s_s(((l_975[0][0] <= p_9) && 0x7284A069L), 6)) >= l_982), g_217)) <= p_9), p_9)), l_982)), 3)) <= l_982)) < g_188) != g_172[4]) < p_9), 0xE7L)) || g_103) <= 0x4BB63EC3L) ^ l_28) & 0x178DB0B5L) & l_982)) <= l_21) == g_949[1][4][1]))))) != 0x11L) && p_9) >= g_103), p_9))), 4294967295UL)) && l_982), (-7L))))
        {
            for (p_9 = 0; (p_9 <= (-19)); )
            ;;
        }
                                            for (l_1288 = 0; (l_1288 <= 49); l_1288 = safe_add_func_uint32_t_u_u(l_1288, 8))
        {
            int32_t l_1386[8][6][5] =   {1L,0x13047496L,0x24F15A40L,0x76EFD044L,(-1L)}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      ;
            uint16_t l_1401 = 2UL;
            int32_t l_1426 = (-10L);
            uint8_t l_1449 = 0xD0L;
            int32_t l_1456 = 1L;
            int16_t l_1467 = 0x2779L;
            int i, j, k;
            {
                uint32_t l_1423 = 0xE576516EL;
                int32_t l_1424 = 0x76D7F62DL;
                int32_t l_1431 = 0x4C9012BCL;
                uint8_t l_1527 = 6UL;
                if ((safe_lshift_func_int8_t_s_u((p_9 && 0xDCE4L), (safe_lshift_func_int8_t_s_u(((l_1424 = (safe_sub_func_uint16_t_u_u((g_315 = (l_27 < (((((((g_63 = (!(safe_lshift_func_int8_t_s_s((!((safe_add_func_int8_t_s_s((l_1386[6][5][0] > 0xB5EEL), p_9)) || (p_9 && (0xDC53108EL > (safe_unary_minus_func_int16_t_s((((safe_rshift_func_uint16_t_u_s((l_1179 = (safe_mod_func_int32_t_s_s(((safe_add_func_uint16_t_u_u((0x6B50CB0AL | p_9), g_4)) < 0x1DL), 0xBC2AB98CL))) )) == 0x0979578BL) == g_543[0]))))))), l_1359[3])))) == l_1001) == 0UL) && (-10L)) || l_1423) ^ 1UL) < 0xE469L))), g_103))) ^ 0xAFL), 2)))))
                {
                    }
                else
                {
                    uint32_t BGgGgl_1423 = (~(((((~((g_173 << l_1434))) && g_1129) || ((g_974 | l_26) - (l_1401 & (l_1631 ^ l_1467)))) || (~((l_1423 << l_1424))))));
int8_t BGgGgbl_1434 = (~((((((~((g_1129 && BGgGgl_1423))) + l_26) + l_1434) || (l_1423 ^ (~(g_974)))) + (~((((l_1631 || (~((l_1401 ^ l_1467)))) && g_173) + l_1424))))));
int32_t BGgGgcl_26 = (~(((~(((~(((g_974 && g_1129) << ((~(BGgGgbl_1434)) && l_26)))) | (~(l_1423))))) && ((((l_1401 + (g_173 >> l_1434)) || l_1467) + l_1424) << (BGgGgl_1423 / l_1631)))));
int16_t BGgGgdg_974 = (~(((~(((~(g_173)) % (~((g_974 % l_1467)))))) + (((l_1631 || (BGgGgbl_1434 + l_1401)) || ((~(l_1423)) ^ (~(((BGgGgcl_26 || BGgGgl_1423) || l_26))))) ^ ((l_1424 << l_1434) | g_1129)))));
uint8_t BGgGgeg_1129 = (~(((~(((~((g_173 - (~((~((g_1129 | BGgGgl_1423)))))))) - (((l_1423 & (l_1401 && BGgGgdg_974)) + (((l_1434 + BGgGgbl_1434) | (~(l_26))) + (~(BGgGgcl_26)))) + l_1424)))) + (~((~(((l_1631 - l_1467) + g_974))))))));
uint16_t BGgGgfl_1401 = (~(((((~(g_173)) && ((~((l_1631 && BGgGgl_1423))) % (~(l_26)))) + (BGgGgcl_26 % (~((l_1434 / g_1129))))) || (((g_974 & l_1423) % l_1401) && (~(((BGgGgdg_974 - (BGgGgbl_1434 && l_1424)) && ((~(BGgGgeg_1129)) + (~(l_1467))))))))));
l_1423 = (~(((~((~((~((((~(BGgGgfl_1401)) % (~(l_1434))) + l_1424))))))) / (~((((BGgGgcl_26 && l_1423) >> (~((~(g_173))))) & (((((BGgGgl_1423 && BGgGgbl_1434) + (~(l_1401))) - BGgGgeg_1129) ^ ((BGgGgdg_974 - l_26) - g_1129)) || (l_1467 % (g_974 | l_1631)))))))));
if((!g_538)){
printf("l_1179=%lld\n", (long long)l_1179);
}
if((!g_1129)){
continue;
}
}
                                               int32_t l_1493[5];
                    for (i = 0; i < 5; i++)
                        l_1493[i] = 0x26DA5657L;
                    l_1426 = (g_247 = ((((((((l_987 = ((g_247 <= ((safe_mod_func_uint32_t_u_u(((g_83 = (((((0L ^ ((safe_lshift_func_int16_t_s_s((((safe_add_func_int16_t_s_s(1L, (p_9 = (safe_sub_func_uint32_t_u_u((((l_1493[0] & (!(p_9 < ((((0x60781BCDL >= (safe_mod_func_int32_t_s_s((((safe_mod_func_int32_t_s_s((l_1271 || (((l_975[0][0] = (((safe_mod_func_int16_t_s_s(l_1493[1], (~0x8BL))) ^ l_1153) ^ l_1493[0])) < l_1423) & 0xCC6EBE87L)), p_9)) > 0xB5L) | 0UL), p_9))) != p_9) ^ 4294967287UL) <= p_9)))) > l_27) && g_540), l_1423))))) || g_172[4]) ^ l_26), l_1401)) || p_9)) && 0x6EL) != l_1493[0]) >= l_1493[4]) < 0x0103082AL)) & 1L), l_1431)) >= g_63)) != g_540)) | l_1493[3]) == l_1434) ^ 0xF2A5F255L) <= 0xB1BFL) != (-1L)) & l_1493[0]) ^ (-1L)));
                                                       if (l_1633)
                    l_1574[8][3][0] = (safe_add_func_uint16_t_u_u(((safe_unary_minus_func_uint32_t_u(p_9)) < (!(safe_rshift_func_uint8_t_u_s(((l_1179 = l_1450) < (safe_rshift_func_int8_t_s_s((g_83 = p_9), (safe_mod_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(g_866[0][6], g_543[0])) & ((((~(safe_add_func_int16_t_s_s(((g_813[1][0] | (l_975[0][0] >= ((safe_add_func_uint8_t_u_u(((p_9 | (l_26 = ((l_1456 = (safe_rshift_func_uint8_t_u_s((((((safe_mod_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u((((1L == 0x2590L) | 0UL) == 0x7D765DB6L), g_361)), 4)), g_1215[4])) != (-3L)), l_1527)) > 1UL) & l_1359[6]) | p_9) > 2L), 1))) | l_1493[0]))) >= l_1153), 0x0EL)) && 0xFBL))) ^ 1UL), l_1449))) < 1UL) == 0x4EL) && l_975[0][0])), l_975[0][0])), 0x54L))))), 1)))), g_173));
                }
        }
    }
    else
    {
        uint32_t l_1954[5][7][5] = {{{18446744073709551615UL,0x2D7E9CF2L,0x99BF8AD8L,0xDE233414L,18446744073709551615UL},{18446744073709551612UL,1UL,8UL,0UL,0xBB8041F1L},{0x214A9EA3L,0xDA497574L,0UL,0x2D7E9CF2L,18446744073709551615UL},{0xA197DEFCL,0UL,0UL,0xA197DEFCL,0xFDB24C69L},{18446744073709551615UL,0x70947AEBL,0xAB58004CL,0x177B7774L,0UL},{18446744073709551613UL,4UL,0xBB8041F1L,0xFDB24C69L,0x5483EC4DL},{0x99BF8AD8L,1UL,18446744073709551609UL,18446744073709551615UL,0x8EDD1C86L}},{{1UL,18446744073709551613UL,1UL,1UL,0x4BE9CFC3L},{18446744073709551615UL,0x70947AEBL,0x107B98D8L,0x5A88219EL,0xAB58004CL},{0xA197DEFCL,18446744073709551612UL,4UL,0UL,18446744073709551615UL},{0x7DF9D7B6L,18446744073709551615UL,0x107B98D8L,18446744073709551612UL,0x107B98D8L},{0xBB8041F1L,0xBB8041F1L,1UL,0UL,0xFDB24C69L},{0UL,0x0E457A2DL,18446744073709551609UL,1UL,0x6F310635L},{18446744073709551609UL,0x5483EC4DL,0xBB8041F1L,8UL,18446744073709551608UL}},{{1UL,0x0E457A2DL,0x99BF8AD8L,0x099BD9B8L,1UL},{18446744073709551615UL,0xBB8041F1L,0UL,0xA197DEFCL,0x1231ACB6L},{2UL,18446744073709551615UL,0UL,0xDE233414L,0UL},{0UL,18446744073709551612UL,18446744073709551608UL,0x5483EC4DL,1UL},{2UL,0x70947AEBL,0UL,0x70947AEBL,2UL},{18446744073709551615UL,18446744073709551613UL,1UL,18446744073709551608UL,0xBB8041F1L},{1UL,1UL,0xAB58004CL,18446744073709551607UL,0x862F632DL}},{{18446744073709551609UL,4UL,0x86D70A80L,18446744073709551613UL,0xBB8041F1L},{0UL,18446744073709551607UL,18446744073709551615UL,0x38C0BC05L,2UL},{0xBB8041F1L,0UL,0xA197DEFCL,0x1231ACB6L,1UL},{0x7DF9D7B6L,0x756BE40BL,0x214A9EA3L,0xDA497574L,0UL},{0xA197DEFCL,1UL,18446744073709551612UL,0x1231ACB6L,0x1231ACB6L},{18446744073709551615UL,0x5A88219EL,18446744073709551615UL,0x38C0BC05L,1UL},{1UL,0UL,0xFDB24C69L,18446744073709551613UL,18446744073709551608UL}},{{0x99BF8AD8L,0xE90C99D2L,2UL,18446744073709551607UL,0x6F310635L},{18446744073709551613UL,0x1231ACB6L,0xFDB24C69L,18446744073709551608UL,0xFDB24C69L},{0x214A9EA3L,0x5478B9A4L,18446744073709551615UL,0x70947AEBL,0x107B98D8L},{1UL,0x4BE9CFC3L,18446744073709551612UL,0x5483EC4DL,18446744073709551615UL},{0x862F632DL,1UL,0x214A9EA3L,0xDE233414L,0xAB58004CL},{8UL,0x4BE9CFC3L,0xA197DEFCL,0xA197DEFCL,0x4BE9CFC3L},{0x6F310635L,0x5478B9A4L,18446744073709551615UL,0x099BD9B8L,0x8EDD1C86L}}};
        uint16_t l_2239[9][7][4] = {{{8UL,0x260EL,0xC0A7L,65526UL},{0xE758L,4UL,65526UL,0UL},{65526UL,0UL,65532UL,0UL},{0x9015L,4UL,1UL,65526UL},{9UL,0x260EL,0UL,0x3A76L},{1UL,0x9015L,8UL,8UL},{1UL,1UL,0UL,8UL}},{{9UL,8UL,1UL,0x260EL},{0x9015L,0xE758L,65532UL,1UL},{65526UL,0xE758L,65526UL,0x260EL},{0xE758L,8UL,0xC0A7L,8UL},{8UL,1UL,0x9015L,8UL},{0x3A76L,0x9015L,0x9015L,0x3A76L},{8UL,0x260EL,0xC0A7L,65526UL}},{{0xE758L,4UL,65526UL,0UL},{65526UL,0UL,65532UL,0UL},{0x9015L,4UL,1UL,65526UL},{9UL,0x260EL,0UL,0x3A76L},{1UL,0x9015L,8UL,8UL},{1UL,1UL,0UL,8UL},{9UL,8UL,1UL,0x260EL}},{{0x9015L,0xE758L,65532UL,1UL},{65526UL,0xE758L,65526UL,0x260EL},{0xE758L,8UL,0xC0A7L,8UL},{8UL,1UL,0x9015L,8UL},{0x3A76L,0x9015L,0x9015L,0x3A76L},{8UL,0x260EL,0xC0A7L,65526UL},{0xE758L,4UL,65526UL,0UL}},{{65526UL,0UL,65532UL,0UL},{0x9015L,4UL,1UL,65526UL},{9UL,0x260EL,0UL,0x3A76L},{1UL,0x9015L,8UL,8UL},{1UL,1UL,0UL,8UL},{9UL,8UL,1UL,0x260EL},{0x9015L,0xE758L,65532UL,1UL}},{{65526UL,0xE758L,65526UL,0x260EL},{0xE758L,8UL,0xC0A7L,8UL},{8UL,1UL,0x9015L,8UL},{0x3A76L,0x9015L,0x9015L,0x3A76L},{8UL,0x260EL,0xC0A7L,65526UL},{0xE758L,4UL,65526UL,0UL},{65526UL,0UL,65532UL,0UL}},{{0x9015L,4UL,1UL,65526UL},{9UL,0x260EL,0UL,0x3A76L},{1UL,0x9015L,8UL,8UL},{1UL,1UL,0UL,0x260EL},{65526UL,0x9015L,0UL,4UL},{0x3A76L,8UL,9UL,0UL},{8UL,8UL,8UL,4UL}},{{8UL,0x9015L,65532UL,0x260EL},{0x260EL,0UL,0x3A76L,0x9015L},{1UL,0x3A76L,0x3A76L,1UL},{0x260EL,4UL,65532UL,8UL},{8UL,0xC0A7L,8UL,0xE758L},{8UL,0xE758L,9UL,0xE758L},{0x3A76L,0xC0A7L,0UL,8UL}},{{65526UL,4UL,0xE758L,1UL},{0UL,0x3A76L,0x9015L,0x9015L},{0UL,0UL,0xE758L,0x260EL},{65526UL,0x9015L,0UL,4UL},{0x3A76L,8UL,9UL,0UL},{8UL,8UL,8UL,4UL},{8UL,0x9015L,65532UL,0x260EL}}};
        {
            int32_t l_1848 = 1L;
            int32_t l_1849 = 0xE7F06EBBL;
            uint8_t l_1955[3];
            uint16_t l_2240 = 0UL;
{
            uint32_t l_2247[3][1][10] = {{{0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L}},{{0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L}},{{0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L}}};
            int i, j, k;
            l_26 = (l_1848 = ((safe_mod_func_uint16_t_u_u( (safe_add_func_int8_t_s_s((((g_813[2][0] = (safe_sub_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s((((((safe_rshift_func_uint16_t_u_u( )) > (l_975[2][0] = (l_2239[3][2][0] < (g_359[1][6] ^ l_2240)))) & ((safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((j = ((safe_add_func_uint16_t_u_u((l_2247[1][0][8] <= (g_4 = (safe_mod_func_int32_t_s_s(l_1955[1], g_188)))), g_188)) < 1UL)), 0x9CFB623FL)), l_1077)) <= l_2163)) >= 0x2C3CBB80L) > g_188))), 0xBFL))) <= l_2239[5][4][1]) ^ 0xF637093EL), g_3261)))) < g_188));
        }
                    for (; (g_22 >= 2); )
                    {
                        g_247 = (l_1359[(g_22 + 1)] == ((safe_lshift_func_uint16_t_u_s(((((l_1956 = ((safe_rshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(((l_1359[(g_22 + 1)] && l_1001) == g_359[3][2]), ((safe_sub_func_uint8_t_u_u((l_1849 = ((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(1L, (g_1460 == 0x2B504DA9L))), 9UL)) > ((safe_lshift_func_uint8_t_u_u(p_9, p_9)) || l_1954[3][0][1]))), g_172[4])) != l_1955[1]))), g_173)), 0x4C755050L)), 0)) <= p_9)) <= p_9) || p_9) < p_9), 13)) ^ g_315));
                        };
        }
    }
                    return p_9;
}
static int32_t func_15( int8_t p_17   )
{
    uint32_t l_973 = 0xD1EA04B1L;
    return l_973;
}
int main (int argc, char* argv[])
{
    func_1();
    }