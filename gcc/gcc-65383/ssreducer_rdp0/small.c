
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
(safe_rshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)right));
}



static int16_t
(safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
 
  return






    (si1 + si2);
}

static int16_t
(safe_sub_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
 
  return






    (si1 - si2);
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
(safe_rshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)right));
}



static int32_t
(safe_unary_minus_func_int32_t_s)(int32_t si )
{
 
  return


    (si==(-2147483647-1)) ?
    ((si)) :


    -si;
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
 
  }

static int32_t
(safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static int32_t
(safe_lshift_func_int32_t_s_u)(int32_t left, unsigned int right )
{}

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
(safe_rshift_func_uint8_t_u_s)(uint8_t left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
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
(safe_mod_func_uint16_t_u_u)(uint16_t ui1  )
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
(safe_rshift_func_uint16_t_u_s)(uint16_t left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}



static uint32_t
(safe_lshift_func_uint32_t_u_s)(uint32_t left, int right )
{}




static uint32_t crc32_context = 0xFFFFFFFFUL;


static void
transparent_crc (uint32_t val  )
{}


static int32_t g_5 = (-10L);
static int16_t g_27[3][1] = {{5L},{5L},{5L}};
static uint32_t g_32[9][2] = {{4294967290UL,0x520F3038L},{6UL,0x520F3038L},{4294967290UL,6UL},{0xD06F6293L,0xD06F6293L},{0xD06F6293L,6UL},{4294967290UL,0x520F3038L},{6UL,0x520F3038L},{4294967290UL,6UL},{0xD06F6293L,0xD06F6293L}};
static uint32_t g_33 = 0x2CD8491FL;
static int8_t g_34[10] = {0xF9L,0xF9L,0xF9L,0xF9L,0xF9L,0xF9L,0xF9L,0xF9L,0xF9L,0xF9L};
static uint8_t g_35 = 0x2EL;
static volatile uint32_t g_44 = 4294967289UL;
static int16_t g_53 = 0x702BL;
static uint16_t g_108 = 65535UL;
static volatile uint32_t g_126 = 0x7CFDFC4DL;
static uint32_t g_127 = 1UL;
static uint32_t g_183[10] = {0x3F7E2340L,0x3F7E2340L,0x3F7E2340L,0x3F7E2340L,0x3F7E2340L,0x3F7E2340L,0x3F7E2340L,0x3F7E2340L,0x3F7E2340L,0x3F7E2340L};
static int16_t g_203 = (-9L);
static uint32_t g_247 = 0x34D8CA7FL;
static uint32_t g_250[1][5] = {{0UL,0UL,0UL,0UL,0UL}};
static int16_t g_298 = 0L;
static int32_t g_315 = 0xA0711357L;
static uint32_t g_317 = 5UL;
static uint16_t g_400 = 65528UL;
static int32_t g_427[3] = {0x92A1D2CDL,0x92A1D2CDL,0x92A1D2CDL};
static uint32_t g_486 = 0x2CAB0F51L;
static uint16_t g_503 = 0x06D7L;
static uint16_t g_504[10][8][3] = {{{1UL,0x4B63L,0x3008L},{65535UL,1UL,0x3008L},{0xEF53L,6UL,0xAA53L},{0xA4E2L,65535UL,0x3008L},{0x4B63L,6UL,0x3008L},{6UL,0xEF53L,0xAA53L},{6UL,5UL,0x3008L},{5UL,0xA4E2L,0x3008L}},{{0xFFB4L,0xFFB4L,0xAA53L},{1UL,0x4B63L,0x3008L},{65535UL,1UL,0x3008L},{0xEF53L,6UL,0xAA53L},{0xA4E2L,65535UL,0x3008L},{0x4B63L,6UL,0x3008L},{6UL,0xEF53L,0xAA53L},{6UL,5UL,0x3008L}},{{5UL,0xA4E2L,0x3008L},{0xFFB4L,0xFFB4L,0xAA53L},{1UL,0x4B63L,0x3008L},{65535UL,1UL,0x3008L},{0xEF53L,6UL,0xAA53L},{0xA4E2L,65535UL,0x3008L},{0x4B63L,6UL,0x3008L},{6UL,0xEF53L,0xAA53L}},{{6UL,5UL,0x3008L},{5UL,0xA4E2L,0x3008L},{0xFFB4L,0xFFB4L,0xAA53L},{1UL,0x4B63L,0x3008L},{65535UL,1UL,0x3008L},{0xEF53L,6UL,0xAA53L},{0xA4E2L,65535UL,0x3008L},{0x4B63L,6UL,0x3008L}},{{6UL,0xEF53L,0xAA53L},{6UL,5UL,0x3008L},{5UL,0xA4E2L,0x3008L},{0xFFB4L,0xFFB4L,0xAA53L},{1UL,0x4B63L,0x3008L},{65535UL,1UL,0x3008L},{0xEF53L,6UL,0xAA53L},{0xA4E2L,65535UL,0x3008L}},{{0x4B63L,6UL,0x3008L},{6UL,0xEF53L,0xAA53L},{6UL,5UL,0x3008L},{5UL,0xA4E2L,0x3008L},{0xFFB4L,0xFFB4L,6UL},{0xF860L,0x316FL,0xEF53L},{0UL,0xF860L,0xEF53L},{65530UL,0xE9B3L,6UL}},{{0x2DF2L,0UL,0xEF53L},{0x316FL,0UL,0xEF53L},{0xE9B3L,65530UL,6UL},{0UL,0x90F2L,0xEF53L},{0x90F2L,0x2DF2L,0xEF53L},{6UL,6UL,6UL},{0xF860L,0x316FL,0xEF53L},{0UL,0xF860L,0xEF53L}},{{65530UL,0xE9B3L,6UL},{0x2DF2L,0UL,0xEF53L},{0x316FL,0UL,0xEF53L},{0xE9B3L,65530UL,6UL},{0UL,0x90F2L,0xEF53L},{0x90F2L,0x2DF2L,0xEF53L},{6UL,6UL,6UL},{0xF860L,0x316FL,0xEF53L}},{{0UL,0xF860L,0xEF53L},{65530UL,0xE9B3L,6UL},{0x2DF2L,0UL,0xEF53L},{0x316FL,0UL,0xEF53L},{0xE9B3L,65530UL,6UL},{0UL,0x90F2L,0xEF53L},{0x90F2L,0x2DF2L,0xEF53L},{6UL,6UL,6UL}},{{0xF860L,0x316FL,0xEF53L},{0UL,0xF860L,0xEF53L},{65530UL,0xE9B3L,6UL},{0x2DF2L,0UL,0xEF53L},{0x316FL,0UL,0xEF53L},{0xE9B3L,65530UL,6UL},{0UL,0x90F2L,0xEF53L},{0x90F2L,0x2DF2L,0xEF53L}}};
static uint32_t g_639 = 0x5BF4443DL;
static int32_t g_897[2][3] = {{0xD7D9BB05L,0xD7D9BB05L,0xD7D9BB05L},{(-1L),(-1L),(-1L)}};
static uint16_t g_1044 = 0x24BFL;
static int16_t g_1138 = 0xDCAAL;
static int32_t g_1472 = (-1L);
static int8_t g_1669 = 8L;
static int32_t g_2084 = (-1L);
static int32_t g_2222 = 0x8FE31437L;
static volatile int32_t g_2236[6] = {0x0E7B8307L,0x0E7B8307L,0x0E7B8307L,0x0E7B8307L,0x0E7B8307L,0x0E7B8307L};
static uint16_t g_2729[3][7] = {{65528UL,0xB42CL,1UL,0xB42CL,65528UL,1UL,1UL},{65528UL,0xB42CL,1UL,0xB42CL,65528UL,1UL,1UL},{65528UL,0xB42CL,1UL,0xB42CL,65528UL,1UL,1UL}};
static uint8_t g_3003 = 0x76L;
static int32_t g_3045[3][7] = {{0x26980768L,0x26980768L,0x26980768L,0x26980768L,0x26980768L,0x26980768L,0x26980768L},{8L,8L,8L,8L,8L,8L,8L},{0x26980768L,0x26980768L,0x26980768L,0x26980768L,0x26980768L,0x26980768L,0x26980768L}};
static volatile uint8_t g_3159[3][4][2] = {{{0x8AL,0x8AL},{0x8AL,0x8AL},{0x8AL,0x8AL},{0x8AL,0x8AL}},{{0x8AL,0x8AL},{0x8AL,0x8AL},{0x8AL,0x8AL},{0x8AL,0x8AL}},{{0x8AL,0x8AL},{0x8AL,0x8AL},{0x8AL,0x8AL},{0x8AL,0x8AL}}};
static int16_t g_3901 = (-3L);

static uint16_t func_1();
static uint8_t func_10(int16_t p_11, int8_t p_12);
static int8_t func_13(  int32_t p_16);
static int8_t func_17(int32_t p_18, uint8_t p_19, uint16_t p_20, int8_t p_21);
static uint16_t func_23(int32_t p_24);
static int8_t func_47(int16_t p_48);
inline static int16_t func_60(uint8_t , uint8_t p_62);
inline static int32_t func_70(int16_t , uint8_t p_72);






static uint16_t func_1()
{
    int16_t l_2 = 0x8A1FL;
    int16_t l_22 = (-1L);
    int32_t l_4309 = 0xCC5AFC00L;
    int32_t l_4310 = 0xDB3F08D2L;
    int32_t l_4311[3];
    g_2236[1] = ((l_2 , (safe_add_func_int32_t_s_s(g_5, l_2))) > (l_4311[0] = (l_4310 = (1L == (safe_lshift_func_uint16_t_u_u(9UL, (safe_mod_func_int32_t_s_s((((l_4309 = ((func_10((func_13(  (((func_17((g_35 = (g_34[5] = (l_22 & (g_33 = (func_23(((((safe_lshift_func_uint16_t_u_u(((g_27[2][0] = g_5) <= l_2), 9)) & 0x9E17L) , g_27[2][0]) | g_5)) , g_32[1][0]))))), g_5, g_5, g_5) <= 1L) != g_5) <= l_2)) , g_247), l_2) , 0xB8L) != l_22)) , 255UL) >= g_3901), g_3045[2][3]))))))));
    }





static uint8_t func_10(int16_t p_11, int8_t p_12)
{
    uint32_t l_4281[8] = {0x57F96573L,0x57F96573L,0x57F96573L,0x57F96573L,0x57F96573L,0x57F96573L,0x57F96573L,0x57F96573L};
    int32_t l_4282 = 0x47CA2331L;
    if ((g_897[0][2] = g_2222))
    {
        int32_t l_4253 = 0x298E0FB6L;
        int32_t l_4256 = 0xE99E48B2L;
        l_4253 = ((((safe_sub_func_int32_t_s_s((5UL ^ l_4256), ((((((safe_mod_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_s(1UL, 11)) && 0xD98578FCL) & 1L), (+(((safe_add_func_int32_t_s_s((l_4282 = (((safe_unary_minus_func_int32_t_s((g_897[0][2] = ((((safe_mod_func_int32_t_s_s((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((((safe_lshift_func_uint8_t_u_s(((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((((g_427[1] = (safe_sub_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((l_4281[5] != (-2L)), 7)) <= (((((g_1472 >= g_2084) , g_317) | g_1044) < l_4281[5]) < g_203)), p_11))) , p_11) , l_4281[2]), 3)), g_504[1][1][2])) | l_4253), g_27[2][0])) , p_12) && l_4281[2]), 4)), (-10L))), 0x774942A1L)) , l_4281[3]) | 4294967295UL) || 0x3866562AL)))) != 0x91L) , p_12)), p_12)) || 1L) <= g_250[0][1])))) <= l_4256) >= 0x64BCL) != g_3003) , (-10L)) < p_12))) , 0xF0E3L) | g_1669) , p_11);
        }
    else;
    }





static int8_t func_13(  int32_t p_16)
{}





static int8_t func_17(int32_t p_18, uint8_t p_19, uint16_t p_20, int8_t p_21)
{
    uint16_t l_38 = 5UL;
    int32_t l_49[7];
    uint32_t l_3367 = 7UL;
    int i, j;
    for (i = 0; i < 7; i++)
        l_49[i] = (-1L);
    if ((l_49[6] = ((func_23((safe_rshift_func_int8_t_s_u(0x3BL, l_38))) <= (safe_unary_minus_func_int8_t_s(0x8EL))) , (safe_lshift_func_int16_t_s_s(l_38, (safe_rshift_func_uint8_t_u_s(((g_44 == 0L) && (safe_rshift_func_int8_t_s_u(func_47(func_23(p_18)), l_38))), 6)))))))
    {
        int32_t l_3187 = 0x18D23FFAL;
        lbl_3520:
        for (p_21 = 0; (p_21 <= (-24)); )
        ;;
        for (; (g_53 != 13); )
        {
            uint8_t l_3519 = 0xC3L;
            int32_t l_3593[5][9][5] = {{{(-1L),5L,(-1L),0xEFF4038FL,0L},{(-10L),(-4L),0x3D12D6ACL,0x3D12D6ACL,0xF7B9C197L},{2L,0xEFF4038FL,5L,0xEFF4038FL,2L},{0xF7B9C197L,0x3D12D6ACL,0x946D202EL,0xF7B9C197L,(-4L)},{(-1L),0xC8EA268AL,5L,0xEFF4038FL,5L},{(-4L),(-4L),0x4D03646FL,0x3D12D6ACL,(-4L)},{(-9L),0xEFF4038FL,(-9L),0xC8EA268AL,2L},{(-4L),0x946D202EL,0x946D202EL,(-4L),0xF7B9C197L},{(-1L),0xEFF4038FL,0L,0xEFF4038FL,(-1L)}},{{0xF7B9C197L,(-4L),0x946D202EL,0x946D202EL,(-4L)},{2L,0xC8EA268AL,(-9L),0xEFF4038FL,(-9L)},{(-4L),0x3D12D6ACL,0x4D03646FL,(-4L),(-4L)},{5L,0xEFF4038FL,5L,0xC8EA268AL,(-1L)},{(-4L),0xF7B9C197L,0x946D202EL,0x3D12D6ACL,0xF7B9C197L},{2L,0xEFF4038FL,5L,0xEFF4038FL,2L},{0xF7B9C197L,0x3D12D6ACL,0x946D202EL,0xF7B9C197L,(-4L)},{(-1L),0xC8EA268AL,5L,0xEFF4038FL,5L},{(-4L),(-4L),0x4D03646FL,0x3D12D6ACL,(-4L)}},{{(-9L),0xEFF4038FL,(-9L),0xC8EA268AL,2L},{(-4L),0x946D202EL,0x946D202EL,(-4L),0xF7B9C197L},{(-1L),0xEFF4038FL,0L,0xEFF4038FL,(-1L)},{0xF7B9C197L,(-4L),0x946D202EL,0x946D202EL,(-4L)},{2L,0xC8EA268AL,(-9L),0xEFF4038FL,(-9L)},{(-4L),0x3D12D6ACL,0x4D03646FL,(-4L),(-4L)},{5L,0xEFF4038FL,5L,0xC8EA268AL,(-1L)},{(-4L),0xF7B9C197L,0x946D202EL,0x3D12D6ACL,0xF7B9C197L},{2L,0xEFF4038FL,5L,0xEFF4038FL,2L}},{{0xF7B9C197L,0x3D12D6ACL,0x946D202EL,0xF7B9C197L,(-4L)},{(-1L),0xC8EA268AL,5L,0xEFF4038FL,5L},{(-4L),(-4L),0x4D03646FL,0x3D12D6ACL,(-4L)},{(-9L),0xEFF4038FL,(-9L),0xC8EA268AL,2L},{(-4L),0x946D202EL,0x946D202EL,(-4L),0xF7B9C197L},{(-1L),0xEFF4038FL,0L,0xEFF4038FL,(-1L)},{0xF7B9C197L,(-4L),0x946D202EL,0x946D202EL,(-4L)},{2L,0xC8EA268AL,(-9L),0xEFF4038FL,(-9L)},{(-4L),0x3D12D6ACL,0x4D03646FL,(-4L),(-4L)}},{{5L,0xEFF4038FL,5L,0xC8EA268AL,(-1L)},{(-4L),0xF7B9C197L,0x946D202EL,0x3D12D6ACL,0xF7B9C197L},{2L,0xEFF4038FL,5L,0xEFF4038FL,2L},{0xF7B9C197L,0x3D12D6ACL,0x946D202EL,0xF7B9C197L,0xF7B9C197L},{5L,5L,0L,0xC8EA268AL,0L},{0xF7B9C197L,0xF7B9C197L,0x3D12D6ACL,0x946D202EL,0xF7B9C197L},{5L,0xC8EA268AL,5L,5L,(-9L)},{0xF7B9C197L,0x4D03646FL,0x4D03646FL,0xF7B9C197L,(-10L)},{5L,0xC8EA268AL,(-1L),0xC8EA268AL,5L}}};
            if (((((0xBEL > (p_19 = (((safe_rshift_func_uint16_t_u_s((((g_317 = (((((safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(1L, (g_298 = (((((l_3367 && 1L) == 65529UL) & (safe_lshift_func_int8_t_s_s(0xF3L, p_18))) | (0xB00FL > ((g_639 = ((((((((safe_rshift_func_int16_t_s_u(((g_486 < g_504[0][7][1]) > 0xB2L), 3)) == g_400) & l_3187) < p_19) | l_3519) , l_49[6]) & 4294967295UL) != g_203)) || 0x21E34445L))) == l_49[5])))), 5)) ^ g_1138) <= g_247) != 0x8D8C20F0L) | p_21)) , 0UL) <= l_3367), l_3519)) ^ 0x475E0D25L) >= p_20))) >= g_427[2]) <= p_21) <= p_21))
            {
                return l_3519;
            }
            else;







safe_mod_func_uint16_t_u_u((g_2729[2][0] = (g_108 = l_3593[(g_503 + 2)][(g_503 + 8)][(g_503 + 3)])) );
        };
    }
    else;





    }





static uint16_t func_23(int32_t p_24)
{
    uint16_t l_30 = 0x8DACL;
    return l_30;
}





static int8_t func_47(int16_t p_48)
{}





inline static int16_t func_60(uint8_t p_61, uint8_t p_62)
{
    int i, j, k;



(0xA2L, 6);






    safe_lshift_func_uint16_t_u_s(g_400, 10);

("index = [%d]\n", i);




    if (p_61)
        ;
lbl_2475:



safe_mod_func_int8_t_s_s((-8L), g_44);






(1UL, 7);




    return g_504[1][1][2];
}





inline static int32_t func_70(int16_t p_71, uint8_t p_72)
{
    int32_t l_87 = 1L;
    int32_t l_110 = 0x9DAAC0CAL;
    uint16_t l_144 = 0UL;
    int32_t l_178 = 4L;
    uint8_t l_242 = 0x27L;
    uint32_t l_316[10] = {0xB55CD4BFL,0xB55CD4BFL,0xB55CD4BFL,0xB55CD4BFL,0xB55CD4BFL,0xB55CD4BFL,0xB55CD4BFL,0xB55CD4BFL,0xB55CD4BFL,0xB55CD4BFL};
    lbl_184:
    for (g_33 = 0; (g_33 > 34); )
    {
        int32_t l_109 = (-7L);
        for (l_109 = 0; (l_109 <= 1); l_109 += 1)
        {
            return l_110;
        }
    }
    for (g_35 = 7; (g_35 != 45); )
    {

(1UL, p_71);




g_127 += 1;

safe_sub_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u(((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(g_32[1][1], 4)), 4)) ^ 252UL))), (0xC8C1L & g_27[2][0]));





        p_72 += 1;






    }
{
                        return g_126;
                    }

    if ((l_144 & (l_178 = ((l_178 , ((l_110 = (safe_sub_func_int8_t_s_s(((-10L) && ((g_53 >= l_87) > l_242)), (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u( )), (((g_247 = l_242) > 0xFAAB16F6L) , l_144)))))) , g_27[2][0])) == p_72))))
    {
        int8_t l_274 = (-3L);
        for (l_110 = 12; (l_110 > 21); l_110 = safe_add_func_int32_t_s_s(l_110, 8))
        {


            return p_72;
        }
g_203 += 1;



{
                }



safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(g_27[2][0], 4)), ((0UL, 6)));



safe_add_func_int32_t_s_s(p_72, (safe_rshift_func_int8_t_s_u((l_316[0] = ((g_108 = l_274) && ((p_71 > ((safe_mod_func_int16_t_s_s( )) & 65526UL)) < g_34[5]))), g_27[1][0])));

    }
    else
    {


{
                    }

    }

    return g_315;
}

int main ()
{
    func_1();
    }
