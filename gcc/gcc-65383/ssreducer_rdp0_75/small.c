
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;

static int8_t
(safe_mod_func_int8_t_s_s)(int8_t si1, int8_t si2 )
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
(safe_rshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)right));
}



static int16_t
(safe_add_func_int16_t_s_s)(int16_t si1  )
{
 
  return






    (si1 + ((int16_t)1));
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
(safe_sub_func_int32_t_s_s)( int32_t si2 )
{}

static int32_t
(safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static uint8_t
(safe_mod_func_uint8_t_u_u)( uint8_t ui2 )
{
 
  return

    (ui2 == 0) ?
    ((((uint8_t)1))) :

    (((uint8_t)1) % ui2);
}

static uint8_t
(safe_lshift_func_uint8_t_u_s)(uint8_t left, int right )
{}



static uint16_t
(safe_mod_func_uint16_t_u_u)(uint16_t ui1  )
{}

static uint16_t
(safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
 
  return

    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}




static int32_t g_5 = (-10L);
static int16_t g_27[3][1] = {{5L},{5L},{5L}};
static uint32_t g_32[9][2] = {{4294967290UL,0x520F3038L},{6UL,0x520F3038L},{4294967290UL,6UL},{0xD06F6293L,0xD06F6293L},{0xD06F6293L,6UL},{4294967290UL,0x520F3038L},{6UL,0x520F3038L},{4294967290UL,6UL},{0xD06F6293L,0xD06F6293L}};
static uint32_t g_33 = 0x2CD8491FL;
static uint8_t g_35 = 0x2EL;
static volatile uint32_t g_44 = 4294967289UL;
static volatile uint32_t g_126 = 0x7CFDFC4DL;
static uint32_t g_127 = 1UL;
static int16_t g_203 = (-9L);
static int32_t g_315 = 0xA0711357L;
static uint16_t g_400 = 65528UL;
static int32_t g_427[3] = {0x92A1D2CDL,0x92A1D2CDL,0x92A1D2CDL};
static uint16_t g_503 = 0x06D7L;
static uint16_t g_504[10][8][3] = {{{1UL,0x4B63L,0x3008L},{65535UL,1UL,0x3008L},{0xEF53L,6UL,0xAA53L},{0xA4E2L,65535UL,0x3008L},{0x4B63L,6UL,0x3008L},{6UL,0xEF53L,0xAA53L},{6UL,5UL,0x3008L},{5UL,0xA4E2L,0x3008L}},{{0xFFB4L,0xFFB4L,0xAA53L},{1UL,0x4B63L,0x3008L},{65535UL,1UL,0x3008L},{0xEF53L,6UL,0xAA53L},{0xA4E2L,65535UL,0x3008L},{0x4B63L,6UL,0x3008L},{6UL,0xEF53L,0xAA53L},{6UL,5UL,0x3008L}},{{5UL,0xA4E2L,0x3008L},{0xFFB4L,0xFFB4L,0xAA53L},{1UL,0x4B63L,0x3008L},{65535UL,1UL,0x3008L},{0xEF53L,6UL,0xAA53L},{0xA4E2L,65535UL,0x3008L},{0x4B63L,6UL,0x3008L},{6UL,0xEF53L,0xAA53L}},{{6UL,5UL,0x3008L},{5UL,0xA4E2L,0x3008L},{0xFFB4L,0xFFB4L,0xAA53L},{1UL,0x4B63L,0x3008L},{65535UL,1UL,0x3008L},{0xEF53L,6UL,0xAA53L},{0xA4E2L,65535UL,0x3008L},{0x4B63L,6UL,0x3008L}},{{6UL,0xEF53L,0xAA53L},{6UL,5UL,0x3008L},{5UL,0xA4E2L,0x3008L},{0xFFB4L,0xFFB4L,0xAA53L},{1UL,0x4B63L,0x3008L},{65535UL,1UL,0x3008L},{0xEF53L,6UL,0xAA53L},{0xA4E2L,65535UL,0x3008L}},{{0x4B63L,6UL,0x3008L},{6UL,0xEF53L,0xAA53L},{6UL,5UL,0x3008L},{5UL,0xA4E2L,0x3008L},{0xFFB4L,0xFFB4L,6UL},{0xF860L,0x316FL,0xEF53L},{0UL,0xF860L,0xEF53L},{65530UL,0xE9B3L,6UL}},{{0x2DF2L,0UL,0xEF53L},{0x316FL,0UL,0xEF53L},{0xE9B3L,65530UL,6UL},{0UL,0x90F2L,0xEF53L},{0x90F2L,0x2DF2L,0xEF53L},{6UL,6UL,6UL},{0xF860L,0x316FL,0xEF53L},{0UL,0xF860L,0xEF53L}},{{65530UL,0xE9B3L,6UL},{0x2DF2L,0UL,0xEF53L},{0x316FL,0UL,0xEF53L},{0xE9B3L,65530UL,6UL},{0UL,0x90F2L,0xEF53L},{0x90F2L,0x2DF2L,0xEF53L},{6UL,6UL,6UL},{0xF860L,0x316FL,0xEF53L}},{{0UL,0xF860L,0xEF53L},{65530UL,0xE9B3L,6UL},{0x2DF2L,0UL,0xEF53L},{0x316FL,0UL,0xEF53L},{0xE9B3L,65530UL,6UL},{0UL,0x90F2L,0xEF53L},{0x90F2L,0x2DF2L,0xEF53L},{6UL,6UL,6UL}},{{0xF860L,0x316FL,0xEF53L},{0UL,0xF860L,0xEF53L},{65530UL,0xE9B3L,6UL},{0x2DF2L,0UL,0xEF53L},{0x316FL,0UL,0xEF53L},{0xE9B3L,65530UL,6UL},{0UL,0x90F2L,0xEF53L},{0x90F2L,0x2DF2L,0xEF53L}}};
static uint16_t g_2729[3][7] = {{65528UL,0xB42CL,1UL,0xB42CL,65528UL,1UL,1UL},{65528UL,0xB42CL,1UL,0xB42CL,65528UL,1UL,1UL},{65528UL,0xB42CL,1UL,0xB42CL,65528UL,1UL,1UL}};

static uint16_t func_1();
static uint8_t func_10(int16_t p_11, int8_t p_12);
static int8_t func_13(  int32_t p_16);
static int8_t func_17(   int8_t p_21);
inline static int16_t func_60(uint8_t , uint8_t p_62);
inline static int32_t func_70(int16_t , uint8_t p_72);






static uint16_t func_1()
{
    int16_t l_2 = 0x8A1FL;
    ((l_2 , (safe_add_func_int32_t_s_s(g_5, l_2))) > (((1L == (safe_lshift_func_uint16_t_u_u(9UL, (safe_mod_func_int32_t_s_s((((((func_10((func_13(  (((func_17(   g_5) <= 1L) != g_5) <= l_2)) , ((uint32_t)1)), l_2) , 0xB8L) != ((int16_t)1))) , 255UL) >= ((int16_t)1)), ((int32_t)1)))))))));
    }





static uint8_t func_10(int16_t p_11, int8_t p_12)
{
    uint32_t l_4281[8] = {0x57F96573L,0x57F96573L,0x57F96573L,0x57F96573L,0x57F96573L,0x57F96573L,0x57F96573L,0x57F96573L};
    if ((((int32_t)1)))
    {
        ((((safe_sub_func_int32_t_s_s( ((((((safe_mod_func_uint8_t_u_u( (+(((safe_add_func_int32_t_s_s(((((safe_unary_minus_func_int32_t_s((((((safe_mod_func_int32_t_s_s((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((((safe_lshift_func_uint8_t_u_s(((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((((g_427[1] = (((int16_t)1))) , p_11) , l_4281[2]), 3)) )) | ((int32_t)1)), g_27[2][0])) , p_12) && l_4281[2]), 4)), (-10L))), 0x774942A1L)) , l_4281[3]) | 4294967295UL) || 0x3866562AL)))) != 0x91L) , p_12)), p_12)) || 1L) <= ((uint32_t)1))))) <= ((int32_t)1)) >= 0x64BCL) != ((uint8_t)1)) , (-10L)) < p_12))) , 0xF0E3L) | ((int8_t)1)) , p_11);
        }
    else;
    }





static int8_t func_13(  int32_t p_16)
{}





static int8_t func_17(   int8_t p_21)
{
    if ((((((uint16_t)1) <= (((int8_t)1))) , (((int16_t)1)))))
    {
        lbl_3520:
        for (p_21 = 0; (p_21 <= (-24)); )
        ;;
        for (; (((int16_t)1) != 13); )
        {
            int32_t l_3593[5][9][5] = {{{(-1L),5L,(-1L),0xEFF4038FL,0L},{(-10L),(-4L),0x3D12D6ACL,0x3D12D6ACL,0xF7B9C197L},{2L,0xEFF4038FL,5L,0xEFF4038FL,2L},{0xF7B9C197L,0x3D12D6ACL,0x946D202EL,0xF7B9C197L,(-4L)},{(-1L),0xC8EA268AL,5L,0xEFF4038FL,5L},{(-4L),(-4L),0x4D03646FL,0x3D12D6ACL,(-4L)},{(-9L),0xEFF4038FL,(-9L),0xC8EA268AL,2L},{(-4L),0x946D202EL,0x946D202EL,(-4L),0xF7B9C197L},{(-1L),0xEFF4038FL,0L,0xEFF4038FL,(-1L)}},{{0xF7B9C197L,(-4L),0x946D202EL,0x946D202EL,(-4L)},{2L,0xC8EA268AL,(-9L),0xEFF4038FL,(-9L)},{(-4L),0x3D12D6ACL,0x4D03646FL,(-4L),(-4L)},{5L,0xEFF4038FL,5L,0xC8EA268AL,(-1L)},{(-4L),0xF7B9C197L,0x946D202EL,0x3D12D6ACL,0xF7B9C197L},{2L,0xEFF4038FL,5L,0xEFF4038FL,2L},{0xF7B9C197L,0x3D12D6ACL,0x946D202EL,0xF7B9C197L,(-4L)},{(-1L),0xC8EA268AL,5L,0xEFF4038FL,5L},{(-4L),(-4L),0x4D03646FL,0x3D12D6ACL,(-4L)}},{{(-9L),0xEFF4038FL,(-9L),0xC8EA268AL,2L},{(-4L),0x946D202EL,0x946D202EL,(-4L),0xF7B9C197L},{(-1L),0xEFF4038FL,0L,0xEFF4038FL,(-1L)},{0xF7B9C197L,(-4L),0x946D202EL,0x946D202EL,(-4L)},{2L,0xC8EA268AL,(-9L),0xEFF4038FL,(-9L)},{(-4L),0x3D12D6ACL,0x4D03646FL,(-4L),(-4L)},{5L,0xEFF4038FL,5L,0xC8EA268AL,(-1L)},{(-4L),0xF7B9C197L,0x946D202EL,0x3D12D6ACL,0xF7B9C197L},{2L,0xEFF4038FL,5L,0xEFF4038FL,2L}},{{0xF7B9C197L,0x3D12D6ACL,0x946D202EL,0xF7B9C197L,(-4L)},{(-1L),0xC8EA268AL,5L,0xEFF4038FL,5L},{(-4L),(-4L),0x4D03646FL,0x3D12D6ACL,(-4L)},{(-9L),0xEFF4038FL,(-9L),0xC8EA268AL,2L},{(-4L),0x946D202EL,0x946D202EL,(-4L),0xF7B9C197L},{(-1L),0xEFF4038FL,0L,0xEFF4038FL,(-1L)},{0xF7B9C197L,(-4L),0x946D202EL,0x946D202EL,(-4L)},{2L,0xC8EA268AL,(-9L),0xEFF4038FL,(-9L)},{(-4L),0x3D12D6ACL,0x4D03646FL,(-4L),(-4L)}},{{5L,0xEFF4038FL,5L,0xC8EA268AL,(-1L)},{(-4L),0xF7B9C197L,0x946D202EL,0x3D12D6ACL,0xF7B9C197L},{2L,0xEFF4038FL,5L,0xEFF4038FL,2L},{0xF7B9C197L,0x3D12D6ACL,0x946D202EL,0xF7B9C197L,0xF7B9C197L},{5L,5L,0L,0xC8EA268AL,0L},{0xF7B9C197L,0xF7B9C197L,0x3D12D6ACL,0x946D202EL,0xF7B9C197L},{5L,0xC8EA268AL,5L,5L,(-9L)},{0xF7B9C197L,0x4D03646FL,0x4D03646FL,0xF7B9C197L,(-10L)},{5L,0xC8EA268AL,(-1L),0xC8EA268AL,5L}}};
            if (((((0xBEL > ((((((uint16_t)1)) ^ 0x475E0D25L) >= ((uint16_t)1)))) >= g_427[2]) <= p_21) <= p_21))
            {
                return ((uint8_t)1);
            }
            else;







safe_mod_func_uint16_t_u_u((g_2729[2][0] = (l_3593[(g_503 + 2)][(g_503 + 8)][(g_503 + 3)])) );
        };
    }
    else;





    }





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
    int32_t l_110 = 0x9DAAC0CAL;
    uint16_t l_144 = 0UL;
    int32_t l_178 = 4L;
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

    if ((l_144 & (l_178 = ((l_178 , ((l_110 = (((int8_t)1))) , g_27[2][0])) == p_72))))
    {
        for (l_110 = 12; (l_110 > 21); l_110 = safe_add_func_int32_t_s_s(l_110, 8))
        {


            return p_72;
        }
g_203 += 1;



{
                }



safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u( 4)), ((0UL, 6)));



safe_add_func_int32_t_s_s(p_72, (safe_rshift_func_int8_t_s_u((l_316[0] = ((((int8_t)1)) && ((p_71 > ((((int16_t)1)) & 65526UL)) < ((int8_t)1)))), g_27[1][0])));

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
