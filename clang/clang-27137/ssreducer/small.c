typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long int uint64_t;
static void
platform_main_end(uint32_t crc, int flag)
{
 printf ("checksum = %X\n", crc);
}
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
(safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    (si1 - si2);
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
(safe_div_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
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
static int8_t
(safe_rshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
(safe_unary_minus_func_int16_t_s)(int16_t si )
{
  return
    -si;
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
(safe_mod_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
(safe_div_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
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
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
(safe_mul_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
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
(safe_div_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static uint8_t
(safe_unary_minus_func_uint8_t_u)(uint8_t ui )
{
  return -ui;
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
(safe_mul_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return ((unsigned int)ui1) * ((unsigned int)ui2);
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
(safe_div_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
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
static uint8_t
(safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
(safe_unary_minus_func_uint16_t_u)(uint16_t ui )
{
  return -ui;
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
(safe_mod_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
(safe_div_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
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
static uint16_t
(safe_rshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
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
(safe_mul_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
(safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
(safe_div_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;
static void
crc32_gentab (void)
{
 uint32_t crc;
 const uint32_t poly = 0xEDB88320UL;
 int i, j;
 for (i = 0; i < 256; i++) {
  crc = i;
  for (j = 8; j > 0; j--) {
   if (crc & 1) {
    crc = (crc >> 1) ^ poly;
   } else {
    crc >>= 1;
   }
  }
  crc32_tab[i] = crc;
 }
}
static void
crc32_byte (uint8_t b) {
 crc32_context =
  ((crc32_context >> 8) & 0x00FFFFFF) ^
  crc32_tab[(crc32_context ^ b) & 0xFF];
}
static void
crc32_8bytes (uint64_t val)
{
 crc32_byte ((val>>0) & 0xff);
 crc32_byte ((val>>8) & 0xff);
 crc32_byte ((val>>16) & 0xff);
 crc32_byte ((val>>24) & 0xff);
 crc32_byte ((val>>32) & 0xff);
 crc32_byte ((val>>40) & 0xff);
 crc32_byte ((val>>48) & 0xff);
 crc32_byte ((val>>56) & 0xff);
}
static void
transparent_crc (uint64_t val, char* vname, int flag)
{
 crc32_8bytes(val);
 if (flag) {
    printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);
 }
}
static uint8_t g_9 = 0xC2L;
static int16_t g_13[7] = {6L,6L,6L,6L,6L,6L,6L};
static uint8_t g_34[1] = {255UL};
static int16_t g_35 = (-1L);
static uint32_t g_68 = 0x826FFEA1L;
static uint32_t g_76 = 0x0DA8F9E1L;
static uint8_t g_87 = 8UL;
static uint16_t g_98[5][5] = {{0x7EEBL,0xD5CEL,0xD5CEL,0x7EEBL,0xD5CEL},{0UL,0x4B89L,65529UL,0x4B89L,0UL},{0xD5CEL,0x7EEBL,0xD5CEL,0xD5CEL,0x7EEBL},{0UL,0x618CL,9UL,0x4B89L,9UL},{0x7EEBL,0x7EEBL,0x38F9L,0x7EEBL,0x7EEBL}};
static int8_t g_154 = 1L;
static uint16_t g_172 = 3UL;
static uint32_t g_184 = 4294967290UL;
static int32_t g_204 = 0xC3769B55L;
static int32_t g_240 = 0x022D0BABL;
static int32_t g_275 = (-1L);
static int16_t g_335 = 0x4348L;
static uint32_t g_352 = 0xA0F0610EL;
static uint32_t g_469 = 1UL;
static uint8_t g_472 = 0x82L;
static const int8_t g_496[4] = {(-5L),(-5L),(-5L),(-5L)};
static int32_t g_506 = 1L;
static int32_t g_573 = 1L;
static uint32_t g_759 = 2UL;
static int16_t g_897 = 2L;
static uint32_t g_982 = 9UL;
static uint32_t g_1138 = 0UL;
static int16_t g_1288 = 0x6F0FL;
static uint32_t g_1345 = 0UL;
static int16_t g_1352 = (-10L);
static uint32_t g_1368 = 0x7E530F86L;
static uint8_t g_1369 = 255UL;
static int32_t g_1370[3] = {3L,3L,3L};
static uint16_t g_1599 = 0x499AL;
static int16_t g_1684[1] = {1L};
static uint32_t g_1798[9][8] = {{0x56E2FFE9L,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x56E2FFE9L,18446744073709551615UL,0xDA781D62L,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,0xDA781D62L,18446744073709551615UL,0xDA781D62L,18446744073709551615UL,18446744073709551615UL,0xDA781D62L},{18446744073709551615UL,0xDA781D62L,0xDA781D62L,18446744073709551615UL,0x56E2FFE9L,18446744073709551615UL,0xDA781D62L,0xDA781D62L},{0xDA781D62L,0x56E2FFE9L,18446744073709551615UL,18446744073709551615UL,0x56E2FFE9L,0xDA781D62L,0x56E2FFE9L,18446744073709551615UL},{18446744073709551615UL,0x56E2FFE9L,18446744073709551615UL,0xDA781D62L,0xDA781D62L,18446744073709551615UL,0x56E2FFE9L,18446744073709551615UL},{18446744073709551615UL,0xDA781D62L,18446744073709551615UL,0xDA781D62L,18446744073709551615UL,18446744073709551615UL,0xDA781D62L,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,0xDA781D62L,18446744073709551615UL,0xDA781D62L,18446744073709551615UL,18446744073709551615UL,0xDA781D62L},{18446744073709551615UL,0xDA781D62L,0xDA781D62L,18446744073709551615UL,0x56E2FFE9L,18446744073709551615UL,0xDA781D62L,0xDA781D62L},{0xDA781D62L,0x56E2FFE9L,18446744073709551615UL,18446744073709551615UL,0x56E2FFE9L,0xDA781D62L,0x56E2FFE9L,18446744073709551615UL}};
static int32_t g_2043 = 1L;
static int8_t g_2422 = 0L;
static int32_t g_2440 = 0x5D5CCD00L;
static int8_t g_2467 = 0x0BL;
static int32_t g_2580[4][10] = {{(-6L),7L,(-6L),7L,(-6L),7L,(-6L),7L,(-6L),7L},{(-7L),7L,(-7L),7L,(-7L),7L,(-7L),7L,(-7L),7L},{(-6L),7L,(-6L),7L,(-6L),7L,(-6L),7L,(-6L),7L},{(-7L),7L,(-7L),7L,(-7L),7L,(-7L),7L,(-7L),7L}};
static uint8_t g_2852 = 0xF5L;
static int32_t g_2853[4][9][7] = {{{1L,8L,1L,(-2L),1L,0x9162827DL,0x2AEB18CDL},{0x22889FBDL,0xFE393A3EL,0x72689436L,1L,(-5L),0xA7638D47L,(-7L)},{(-7L),7L,0x2E60C645L,0x922280B4L,0x2CD7B01AL,0x9162827DL,0x165B162BL},{8L,0xBC24BBA0L,0xEF644D30L,0x29CDD46AL,(-7L),0x2E60C645L,0x3B7B7FB6L},{5L,0x2956CC64L,0x7E7AE4D9L,5L,0xBAC0718BL,(-10L),(-10L)},{0x922280B4L,(-5L),0x2E60C645L,0x2956CC64L,0x5455B5EAL,0x29CDD46AL,0x1E7F4047L},{7L,0x22889FBDL,5L,0L,0xBC24BBA0L,0x2CD7B01AL,0x2E60C645L},{0x45A3EBD2L,1L,0L,(-7L),0xFE393A3EL,0xDAA941AEL,(-7L)},{0xE2A7F447L,0x2CD7B01AL,(-8L),(-7L),1L,0x037CD66FL,0x165B162BL}},{{0xEF644D30L,3L,(-4L),0L,1L,0x5455B5EAL,0xB22D563CL},{8L,0xE2A7F447L,0L,0x2956CC64L,0x22889FBDL,0xCB7BB8D8L,1L},{0x2956CC64L,0L,1L,5L,(-8L),0x57A8756FL,0x45A3EBD2L},{0x3715B254L,0L,4L,4L,0L,0x3715B254L,(-2L)},{3L,0xECFAD87DL,0x45A3EBD2L,0xEF644D30L,1L,(-10L),1L},{(-8L),0xCB7BB8D8L,0xDB9C0739L,1L,0x4EB927D7L,0xA7638D47L,0xEF644D30L},{0x7E7AE4D9L,0xECFAD87DL,0xCB7BB8D8L,(-2L),0x4B49E98FL,0xECEDB848L,4L},{0x57A8756FL,0L,(-2L),3L,0L,(-1L),0x57A8756FL},{0xECB0BC40L,1L,0L,0x2E60C645L,(-2L),0xA7638D47L,0x3B7B7FB6L}},{{0L,0x4B49E98FL,0L,0L,(-1L),0x4EB927D7L,1L},{1L,0xB22D563CL,0x2BD64D8CL,7L,0x2CD7B01AL,0x45A3EBD2L,0x9162827DL},{0xB22D563CL,0xDB9C0739L,0L,(-5L),0L,0L,0x9162827DL},{0x73EF0EC5L,1L,0xCB7BB8D8L,(-10L),0x9162827DL,(-2L),1L},{1L,1L,8L,5L,8L,8L,0x3B7B7FB6L},{0x9162827DL,(-8L),0x3715B254L,0L,0L,(-1L),0x57A8756FL},{(-2L),0x3B7B7FB6L,4L,0L,0L,0L,4L},{0x2AEB18CDL,0x2AEB18CDL,0xE2A7F447L,7L,0x5455B5EAL,8L,0xEF644D30L},{0x9162827DL,0xA08F48A9L,0xD4E37EFFL,0xECFAD87DL,(-4L),4L,1L}},{{(-4L),0L,0x72689436L,0x4EB927D7L,0x5455B5EAL,0L,(-2L)},{(-1L),0x29CDD46AL,(-1L),3L,0L,1L,3L},{0xB22D563CL,1L,0x7F6BF62EL,0x2AEB18CDL,0L,(-5L),0x2E60C645L},{0xA7638D47L,0L,0xAB9529BDL,0L,8L,(-4L),0L},{(-5L),(-8L),1L,0xEF644D30L,0x9162827DL,1L,7L},{0xECB0BC40L,(-2L),0xDAA941AEL,8L,0L,(-10L),(-5L)},{0xAB9529BDL,0x3B7B7FB6L,0xDAA941AEL,0xAB9529BDL,0x2CD7B01AL,0L,(-10L)},{0xEF644D30L,7L,1L,0x3B7B7FB6L,(-1L),0xC093BDB0L,5L},{(-8L),0xA7638D47L,0xAB9529BDL,(-4L),(-2L),0xDB9C0739L,0L}}};
static uint16_t g_3109[3] = {0xAEF2L,0xAEF2L,0xAEF2L};
static int8_t g_3172 = 0xC1L;
static uint8_t g_3193 = 0UL;
static uint16_t g_3317 = 1UL;
static uint32_t g_3463 = 0x33A4172FL;
static int32_t g_3486 = 0L;
static int8_t g_3600 = 0xA8L;
static int32_t g_3935[8][5] = {{8L,0x6D7DF5BFL,0xACB7A77CL,0xCFF4EF85L,0x6D7DF5BFL},{(-1L),0xACB7A77CL,0xACB7A77CL,(-1L),0xCFF4EF85L},{0L,(-1L),(-1L),0x6D7DF5BFL,0x6D7DF5BFL},{8L,(-1L),8L,0xCFF4EF85L,0xACB7A77CL},{8L,(-1L),(-9L),8L,(-9L)},{8L,8L,0x6D7DF5BFL,0xACB7A77CL,0xCFF4EF85L},{(-1L),0xCFF4EF85L,(-9L),(-9L),0xCFF4EF85L},{0xCFF4EF85L,(-1L),(-1L),0xCFF4EF85L,(-9L)}};
static uint8_t g_4423[7] = {250UL,250UL,250UL,250UL,250UL,250UL,250UL};
static uint8_t g_4475 = 0x33L;
static int8_t g_4689 = 9L;
static int32_t g_5210[1] = {(-1L)};
static const int32_t g_5225 = 0xAF6272FEL;
static int32_t g_5446[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
static int16_t g_5512 = (-9L);
static int16_t g_5844 = 0xA81BL;
static uint8_t g_6029 = 1UL;
static int16_t g_6428 = 2L;
static uint32_t g_6771 = 7UL;
inline static int32_t func_2(uint8_t p_3, uint8_t p_4, uint32_t p_5, int32_t p_6);
static uint16_t func_15(int16_t p_16, uint8_t p_17);
inline static int16_t func_18(int32_t p_19, uint32_t p_20, const uint16_t p_21);
inline static uint32_t func_28(uint32_t p_29, int32_t p_30, int32_t p_31, const uint16_t p_32);
static uint8_t func_37(uint16_t p_38, int32_t p_39, int32_t p_40, int8_t p_41, const int8_t p_42);
inline static uint16_t func_43(int32_t p_44);
static uint16_t func_51(uint32_t p_52);
static uint16_t func_54(int32_t p_55, uint16_t p_56, uint32_t p_57, const int16_t p_58, int16_t p_59);
static int32_t func_60(uint8_t p_61);
inline static int8_t func_1(void)
{
    int32_t l_10 = 0xE30F5872L;
    int32_t l_33 = 0xBF5F40E1L;
    int32_t l_5910 = 0L;
    int16_t l_5913 = 0x1E08L;
    const int32_t l_6074 = 2L;
    uint32_t l_6137 = 0x0644BDCEL;
    uint16_t l_6147 = 9UL;
    int32_t l_6160 = 0xBC1CE112L;
    uint32_t l_6167 = 0x19A4727FL;
    uint32_t l_6261 = 0x88ADAE8CL;
    int32_t l_6536 = 0L;
    int32_t l_6627 = 0xA1B7E97EL;
    int8_t l_6823 = (-1L);
    uint8_t l_6825 = 0x44L;
    l_33 = func_2(((safe_div_func_int16_t_s_s(((((g_13[4] = ((l_10 = g_9) , (safe_sub_func_int8_t_s_s(l_10, 5L)))) <= (!((func_15((g_9 > (func_18((safe_rshift_func_uint8_t_u_u(g_9, 7)), g_9, (((safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(g_9, 3)), (func_28(l_33, g_9, g_9, g_9) , 1UL))) <= 1UL) && g_172)) | l_33)), l_33) <= 0x5718L) , g_759))) < l_33) ^ 4294967295UL), 0x0918L)) == l_33), g_1798[4][6], g_5225, g_496[2]);
                                   uint8_t BpBpBg_1369 = (~(((~((~((((~((~(g_3317)))) | ((~(g_352)) ^ (~(g_154)))) ^ (~((~((l_5913 | g_897)))))))))) || ((~(((g_76 || g_1369) % (l_6137 || g_9)))) || g_6029))));
uint8_t BpBpBbg_6029 = (~(((~(((~((~(((~(((~(l_6137)) ^ g_154))) & l_5913))))) || (~(((~((~((~(BpBpBg_1369)))))) % (((g_76 & g_3317) >> g_6029) ^ (~((~(g_9))))))))))) % (~((g_897 | ((~(g_1369)) ^ (~(g_352)))))))));
uint16_t BpBpBcg_3317 = (~((((BpBpBg_1369 | (~((~(g_352))))) || ((g_76 ^ (~(g_6029))) & (~(BpBpBbg_6029)))) & ((~((g_9 & (~((g_1369 & l_5913)))))) ^ (~(((~(g_154)) | ((g_897 % g_3317) ^ l_6137))))))));
int8_t BpBpBdg_154 = (~((((l_5913 ^ BpBpBg_1369) >> ((~((g_9 << (g_3317 & g_1369)))) || (~(g_154)))) % (l_6137 << (((~(g_897)) & g_6029) | (((g_76 ^ BpBpBbg_6029) || BpBpBcg_3317) & (~(g_352))))))));
uint32_t BpBpBeg_352 = (~(((~(((BpBpBdg_154 | (~((l_6137 & g_897)))) || (~((g_6029 & ((g_3317 ^ BpBpBcg_3317) & (~((g_9 & BpBpBg_1369)))))))))) & (~(((~((~((~(BpBpBbg_6029)))))) ^ ((l_5913 % (g_1369 || (~(g_352)))) % ((~(g_76)) ^ g_154))))))));
uint8_t BpBpBfg_9 = (~(((((g_897 << (g_3317 % BpBpBeg_352)) | (g_1369 & (g_352 | (BpBpBcg_3317 ^ l_5913)))) ^ (~((~(((l_6137 ^ g_154) || (g_9 ^ (((~(g_6029)) | (BpBpBbg_6029 | BpBpBdg_154)) ^ (~(g_76)))))))))) | (~((~((~((~(BpBpBg_1369)))))))))));
if(!(((g_6029 < g_352) && (!g_6029)))){
BpBpBg_1369 = g_1369;
BpBpBbg_6029 = g_6029;
BpBpBcg_3317 = g_3317;
BpBpBdg_154 = g_154;
BpBpBeg_352 = g_352;
                                   if (((g_172<=3) || (!g_469)))
                    BpBpBfg_9 = g_9;
g_1369 = (~((((~((~(((~((~(((~(BpBpBcg_3317)) || (~((~(g_3317))))))))) ^ (~((~(l_5913))))))))) || (~((~((~((BpBpBbg_6029 ^ (BpBpBfg_9 & (~((BpBpBg_1369 % (g_9 | g_154))))))))))))) || (((~((((~(l_6137)) | (~(g_6029))) || (~((~((~(g_352))))))))) | (~((~((g_897 & (BpBpBdg_154 & BpBpBeg_352))))))) | (g_76 & g_1369)))));
g_6029 = (~(((((~((l_6137 ^ (BpBpBfg_9 || g_897)))) & (~((~(g_3317))))) || (~((~((~((g_9 & (BpBpBeg_352 || g_6029))))))))) | (~((~((((~((~(g_1369)))) ^ ((~(g_352)) || ((~((g_76 >> BpBpBbg_6029))) || g_154))) | ((BpBpBg_1369 % (~(l_5913))) | (BpBpBcg_3317 | BpBpBdg_154))))))))));
                                    while ((((g_3172 < l_33) && (l_5910<=0)) && (!l_6261)) )
{
g_469 += 1;
}
                    g_3317 = (~(((~((((~(BpBpBbg_6029)) ^ (~((BpBpBcg_3317 << g_154)))) | (~((l_5913 | l_6137)))))) | ((((~(BpBpBdg_154)) ^ g_6029) ^ ((~(((BpBpBeg_352 % BpBpBg_1369) & g_3317))) ^ ((g_897 | g_1369) % (g_76 || g_9)))) ^ (~((g_352 % BpBpBfg_9)))))));
g_154 = (~((((((~((g_154 | (g_6029 & g_1369)))) | (BpBpBfg_9 & BpBpBeg_352)) | g_9) || (~(BpBpBdg_154))) ^ (((~((BpBpBbg_6029 | BpBpBg_1369))) & (~(l_5913))) || ((g_352 | (~(BpBpBcg_3317))) >> (((g_897 ^ g_76) % (~(l_6137))) || (~((~(g_3317))))))))));
g_352 = (~(((~((BpBpBcg_3317 % l_5913))) % ((((g_76 % g_352) >> ((~((~((g_3317 & BpBpBg_1369))))) ^ (BpBpBdg_154 || g_154))) >> (g_9 || l_6137)) | ((~(((BpBpBbg_6029 ^ BpBpBeg_352) % (BpBpBfg_9 ^ g_6029)))) % ((~(g_897)) | g_1369))))));
                                    while (((l_33<=233) && (!g_5512)) )
{
g_5512 += 1;
}
                    g_9 = (~(((~(((~(((g_1369 % (((~((g_76 ^ l_6137))) || BpBpBg_1369) << (~(BpBpBeg_352)))) >> ((g_3317 >> BpBpBcg_3317) & (((~(((BpBpBdg_154 | g_352) << g_897))) & (~(BpBpBfg_9))) | BpBpBbg_6029))))) || (~(((~(g_9)) | (~((~(g_6029)))))))))) & (~(((~(g_154)) & l_5913))))));
if(!(((l_6137<=105168334U) || (g_9<1)))){
printf("g_1369=%llu\n", (unsigned long long)g_1369);
for (l_33 = 0; l_33 < 8; l_33++)
    {
        for (g_275 = 0; g_275 < 5; g_275++)
        {
            transparent_crc(g_3935[l_33][g_275], "g_3935[l_33][g_275]", g_2043);
            if (g_2043) printf("index = [%d][%d]\n", l_33, g_275);
        }
    };
                    BpBpBeg_352 = (~((((~((~(BpBpBdg_154)))) << (~(((((~((g_352 >> g_6029))) || (~(BpBpBcg_3317))) ^ g_897) >> (~((~((BpBpBfg_9 & g_9))))))))) ^ (~(((~((((BpBpBeg_352 % (g_154 % g_3317)) % (g_1369 % l_6137)) | (~((BpBpBbg_6029 >> l_5913)))))) | (g_76 >> BpBpBg_1369)))))));
g_6029 = (~((((~(((~(g_352)) % (~((BpBpBeg_352 << (g_897 ^ BpBpBbg_6029))))))) || (~((~(BpBpBg_1369))))) << ((~((((~(BpBpBdg_154)) >> (BpBpBcg_3317 % g_9)) || (~(((~(l_6137)) % ((~((~(l_5913)))) ^ ((~(g_76)) ^ (g_3317 ^ (~(g_154))))))))))) & (g_1369 || (~((g_6029 || BpBpBfg_9))))))));
}
                                    while ((g_2467 > g_3193) )
{
g_2852 += 1;
}
                    LABEL_pBpBg: if((BpBpBbg_6029 > BpBpBeg_352)){
printf("g_6029=%llu\n", (unsigned long long)g_6029);
goto LABEL_pBpBg;
}
if(((g_76>432544659U) && ((!g_897) || (!g_154)))){
;
g_1369 = (~(((~((~(((~((~(BpBpBfg_9)))) | (l_5913 & g_9)))))) >> (~((((~(((BpBpBeg_352 << (~(BpBpBg_1369))) & ((~(((g_1369 ^ BpBpBbg_6029) || (BpBpBdg_154 ^ (~(g_6029)))))) >> l_6137)))) & ((g_3317 || (g_897 << g_154)) % (~(BpBpBcg_3317)))) % (~(((~(g_76)) | g_352)))))))));
g_3317 = (~((((~((~((~((~(BpBpBdg_154)))))))) || ((~((((g_6029 >> (~(g_9))) & g_352) >> (~(l_6137))))) >> (g_1369 >> BpBpBcg_3317))) ^ ((~((~(BpBpBbg_6029)))) || (((g_897 || (~(((~(BpBpBfg_9)) << (BpBpBg_1369 & g_76))))) % g_3317) & (((~(BpBpBeg_352)) ^ g_154) >> l_5913))))));
goto LABEL_pBpBg;
}
if(((BpBpBdg_154>0) && (!l_5913))){
{
                        uint32_t l_1366 = 0x006BF911L;
                        int8_t l_1367[2];
                        int i;
                        ;
                        g_506 = 1L;
for (l_5910 = 29; (l_5910 != 28); l_5910 = safe_sub_func_int16_t_s_s(l_5910, 7))
                    {
                        g_240 = g_204;
                        g_240 = (((BpBpBdg_154 = (-5L)) , (~(7UL && ((g_34[0] && g_3193) != (safe_mod_func_uint8_t_u_u(1UL, (safe_div_func_uint16_t_u_u((((l_5910 | (1UL ^ (g_3193 <= (i ^ g_5844)))) >= 0x083A407DL) ^ g_3193), 0x8056L)))))))) >= g_3193);
                    };
                    g_1370[2] = (g_87 = (g_1368 = (g_506 = ((safe_add_func_uint16_t_u_u((!(g_5512 = 0xD302L)), ((((((safe_rshift_func_uint16_t_u_s((g_3317 = ((((g_1369 != (safe_div_func_int8_t_s_s(((((l_5910 | (safe_lshift_func_uint8_t_u_u(((((safe_lshift_func_int8_t_s_u(0xB0L, ((safe_div_func_uint8_t_u_u(g_34[0], (((0x1E1D4A8BL ^ (-9L)) > (g_897 = 0xF6A0L)) | (safe_lshift_func_uint8_t_u_u(((~g_1369) < g_1369), 6))))) ^ 0x33E45DBAL))) | g_1369) && g_34[0]) > g_275), l_1366))) != g_1369) , g_496[2]) != g_68), g_506))) >= l_1367[1]) , g_1369) & 7UL)), g_1368)) >= 7L) , 2UL) ^ l_1367[1]) <= 0x428C0265L) | l_1366))) ^ g_472))));
                        g_506 = 0L;
                    }
{
                        g_204 = g_982;
                    }
                    g_897 += 1;
                    printf("g_154=%lld\n", (long long)g_154);
g_2440 -= 1;
                    goto LABEL_pBpBg;
}
if((l_6137 > BpBpBeg_352)){
;
goto LABEL_pBpBg;
}
if((l_6137 < BpBpBdg_154)){
printf("g_9=%llu\n", (unsigned long long)g_9);
g_6029 = (~(((~((~((~(((~(((g_76 << (~(((~(BpBpBbg_6029)) & (~((~(l_5913)))))))) % (~(g_9))))) >> (~((g_6029 | (~(BpBpBeg_352)))))))))))) | (~(((g_1369 % g_897) % (((BpBpBg_1369 ^ g_3317) % (~((BpBpBdg_154 | g_352)))) | (((~(g_154)) || (~(l_6137))) & (BpBpBcg_3317 << BpBpBfg_9)))))))));
g_3317 = (~(((~((((((~(((g_3317 & (~(l_6137))) % g_76))) | (~(((BpBpBeg_352 | (~(g_6029))) >> (BpBpBdg_154 || BpBpBbg_6029))))) & g_9) | g_154) >> (~((((~((~(BpBpBg_1369)))) | (g_897 % g_352)) << ((~((~(l_5913)))) >> (~(g_1369))))))))) >> (~((~((BpBpBfg_9 & BpBpBcg_3317))))))));
goto LABEL_pBpBg;
}
}
                                                   uint32_t BGBGBg_352 = (~((((~((~(((g_87 | g_5844) ^ (~(g_352))))))) / g_275) ^ ((~(l_6147)) % ((~(g_5225)) >> (((~(((~(g_1368)) & g_335))) ^ (~(g_897))) % (~(g_68))))))));
int16_t BGBGBbg_335 = (~((((~((((~(g_1368)) >> (BGBGBg_352 & (g_68 ^ l_6147))) % (~(g_5844))))) | (~(((g_5225 || g_275) ^ (~(g_335)))))) / (~(((g_352 / g_897) ^ g_87))))));
uint32_t BGBGBcg_1368 = (~(((((((~(g_1368)) & (~(l_6147))) || g_275) ^ ((~(g_352)) % (~(BGBGBg_352)))) & ((g_335 % (g_897 | g_5844)) | (~(g_5225)))) & (~((~((~(((g_68 | g_87) ^ BGBGBbg_335))))))))));
uint8_t BGBGBdg_87 = (~((((~((g_275 % (~(g_5844))))) ^ (((l_6147 || g_68) ^ ((((g_897 % BGBGBg_352) & (~((~(g_335))))) / BGBGBcg_1368) || (~(g_1368)))) & ((BGBGBbg_335 / g_352) || g_87))) || (~(g_5225)))));
int16_t BGBGBeg_897 = (~((((~(g_5844)) || (BGBGBdg_87 & (~((g_68 || BGBGBbg_335))))) % ((((((~(l_6147)) || (~(BGBGBcg_1368))) % g_87) & (~((~(g_5225))))) & BGBGBg_352) ^ (~(((g_1368 ^ (g_352 || g_275)) % ((~(g_335)) % g_897))))))));
if((g_5225 || (l_6147 < g_897))){
LABEL_GBGBf: BGBGBg_352 = g_352;
BGBGBbg_335 = g_335;
                                   if ((g_87<=251))
                    BGBGBcg_1368 = g_1368;
BGBGBdg_87 = g_87;
BGBGBeg_897 = g_897;
g_352 = (~(((~(((~(((g_1368 % BGBGBeg_897) || ((~(g_5844)) / (~(BGBGBg_352)))))) ^ (~((~(((l_6147 || (g_335 & g_897)) & (~((~(((BGBGBbg_335 | ((~(g_5225)) % g_68)) | g_352))))))))))))) % (~((((~(g_275)) | ((~((~(BGBGBcg_1368)))) || g_87)) % BGBGBdg_87))))));
g_335 = (~(((~((~((~(BGBGBdg_87)))))) || (~(((((~(g_68)) << ((~((g_897 || (g_1368 & BGBGBbg_335)))) / ((~((((~(g_335)) & g_87) >> (~((BGBGBg_352 ^ (g_352 & BGBGBcg_1368))))))) / (~((~(g_275))))))) || g_5225) & (~((BGBGBeg_897 % ((~(g_5844)) ^ l_6147))))))))));
g_1368 = (~((((~((((g_5225 & g_5844) | ((g_68 & (l_6147 ^ (~(g_897)))) ^ (~(BGBGBbg_335)))) || (~(((g_352 / g_87) & (~(g_275)))))))) | (BGBGBcg_1368 / BGBGBg_352)) | (~(((~(((~(g_1368)) >> BGBGBeg_897))) & (~(((~(g_335)) | BGBGBdg_87)))))))));
LABEL_GBGBg: g_87 = (~(((~(((~((~((((g_1368 & (BGBGBbg_335 % g_87)) & (~((g_335 ^ (g_5844 || BGBGBeg_897))))) % (BGBGBdg_87 | (~(g_897)))))))) | (~(((~(g_352)) & (~(BGBGBcg_1368)))))))) & (~(((~((~(BGBGBg_352)))) & (((~(((~(l_6147)) / g_5225))) % (~(g_68))) >> (~(g_275)))))))));
g_897 = (~(((~(((~(((g_5844 & ((g_897 | (~(BGBGBg_352))) << ((((g_352 & g_87) ^ g_68) & (~(BGBGBcg_1368))) / (((~(g_1368)) || l_6147) ^ g_335)))) | (~((g_5225 % (~((BGBGBeg_897 % g_275))))))))) % (~(BGBGBbg_335))))) & (~(BGBGBdg_87)))));
if((!BGBGBg_352)){
;
g_352 = (~(((~((((~(((g_5225 & g_5844) << BGBGBeg_897))) << (BGBGBcg_1368 & g_1368)) >> (~(((g_897 >> g_68) >> (~(g_275)))))))) % (((~(BGBGBg_352)) || (~(((~(BGBGBdg_87)) | (((~((~(g_335)))) >> (BGBGBbg_335 / (~(g_87)))) >> l_6147))))) >> g_352))));
}
if((g_352>4294967295U)){
printf("g_335=%lld\n", (long long)g_335);
goto LABEL_pBpBg;
}
if((!g_897)){
{
            transparent_crc(g_3935[g_2440][l_6160], "g_3935[g_2440][l_6160]", l_5910);
            if (l_5910) printf("index = [%d][%d]\n", g_2440, l_6160);
        }
                    printf("g_1368=%llu\n", (unsigned long long)g_1368);
BGBGBg_352 = (~(((((g_275 & (g_1368 << g_87)) & l_6147) >> BGBGBbg_335) | (~((((~((~(((~(BGBGBeg_897)) | BGBGBg_352))))) >> (BGBGBdg_87 ^ ((~(((~((~(g_5844)))) | g_897))) >> (g_68 << BGBGBcg_1368)))) || (~((~(((g_5225 | (~(g_352))) || g_335)))))))))));
{
                        uint32_t l_1366 = 0x006BF911L;
                        int8_t l_1367[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            {
{
                    for (g_2043 = 24; (g_2043 != 8); g_2043 = safe_sub_func_int8_t_s_s(g_2043, 7))
                    {
                        if (BpBpBg_1369)
                            break;
                        l_6137 = g_897;
                    }
                }
                    l_1367[i] = 1L;}
                        l_10 = 1L;
                        g_1370[2] = (BpBpBg_1369 = (g_1138 = (l_10 = ((safe_add_func_uint16_t_u_u((!(g_6428 = 0xD302L)), ((((((safe_rshift_func_uint16_t_u_s((g_1599 = ((((BGBGBdg_87 != (safe_div_func_int8_t_s_s(((((g_3486 | (safe_lshift_func_uint8_t_u_u(((((safe_lshift_func_int8_t_s_u(0xB0L, ((safe_div_func_uint8_t_u_u(g_34[0], (((0x1E1D4A8BL ^ (-9L)) > (l_5913 = 0xF6A0L)) | (safe_lshift_func_uint8_t_u_u(((~BGBGBdg_87) < BGBGBdg_87), 6))))) ^ 0x33E45DBAL))) | BGBGBdg_87) && g_34[0]) > l_6627), l_1366))) != BGBGBdg_87) , g_496[2]) != BGBGBcg_1368), l_10))) >= l_1367[1]) , BGBGBdg_87) & 7UL)), g_1368)) >= 7L) , 2UL) ^ l_1367[1]) <= 0x428C0265L) | l_1366))) ^ g_2852))));
                        l_10 = 0L;
                    }
                    goto LABEL_pBpBg;
}
if(!((g_5844 < g_897))){
g_982 += 1;
                    printf("g_87=%llu\n", (unsigned long long)g_87);
{
                        int32_t l_2330 = 0xB0B48C1AL;
                        g_573 = (safe_rshift_func_int16_t_s_s(6L, l_2330));
                        l_6160 = g_35;
                    }
                    BGBGBdg_87 = (~((((g_897 >> g_5225) / (~((g_68 % ((BGBGBeg_897 & ((~((~((g_5844 % BGBGBdg_87))))) / g_352)) / (g_1368 / l_6147)))))) % (((~((~((((~((~(g_275)))) ^ g_87) / (~((BGBGBg_352 / (~(g_335)))))))))) & BGBGBcg_1368) << (~(BGBGBbg_335))))));
;
}
if((g_68 < BGBGBdg_87)){
printf("g_897=%lld\n", (long long)g_897);
g_352 = (~(((~(g_1368)) | ((((BGBGBcg_1368 % BGBGBbg_335) | ((~((BGBGBg_352 / g_5225))) || BGBGBdg_87)) | g_335) ^ (((g_68 << (~(g_87))) << (((g_897 | g_5844) | (g_275 / g_352)) || (~(BGBGBeg_897)))) & l_6147)))));
goto LABEL_GBGBf;
}
}
        int8_t l_5835[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
        int16_t l_5888 = 0x3337L;
        uint32_t l_5929 = 0xA1740709L;
        int32_t l_5943 = 0x3E7952D3L;
        int32_t l_5986 = 0x2FC02A58L;
        uint32_t l_6086 = 0x310B84EAL;
        int32_t l_6136[4];
        int16_t l_6152 = (-9L);
        int32_t l_6280 = 0L;
        uint32_t l_6318 = 1UL;
        int32_t l_6479[2];
        int8_t l_6486 = 0x18L;
        uint16_t l_6500 = 0x1711L;
        uint32_t l_6600 = 1UL;
        int8_t l_6646 = 0xB6L;
        uint16_t l_6647[10][3] = {{0x588CL,0x588CL,0x4801L},{65533UL,0x4801L,0x4801L},{0x4801L,7UL,0x0738L},{65533UL,7UL,65533UL},{0x588CL,0x4801L,0x0738L},{0x588CL,0x588CL,0x4801L},{65533UL,0x4801L,0x4801L},{0x4801L,7UL,0x0738L},{65533UL,7UL,65533UL},{0x588CL,0x4801L,0x0738L}};
        int32_t l_6762 = 0xD148A94AL;
        uint8_t l_6774[4][8][8] = {{{2UL,0x21L,3UL,254UL,0x20L,0x56L,0x9EL,1UL},{0x78L,0x8FL,1UL,0x68L,4UL,4UL,0x68L,1UL},{255UL,255UL,4UL,9UL,0xABL,0x44L,0x9DL,0x9EL},{0x9EL,251UL,0x89L,255UL,1UL,0x68L,0x78L,0x9EL},{251UL,254UL,5UL,9UL,254UL,0xFBL,3UL,1UL},{246UL,0x56L,5UL,0x68L,0xDEL,254UL,4UL,1UL},{0xE0L,0xFBL,0x9DL,254UL,9UL,0x24L,0xCBL,0xDEL},{254UL,1UL,251UL,0xFBL,0x9EL,0xA6L,0x9EL,0xFBL}},{{0x12L,5UL,0x12L,0xCBL,9UL,4UL,0x89L,0x78L},{9UL,254UL,1UL,0x56L,0xABL,2UL,9UL,0x8FL},{9UL,0x12L,0x68L,255UL,9UL,0UL,0x21L,9UL},{0x12L,2UL,5UL,0xE0L,0x9EL,246UL,1UL,0x21L},{254UL,0x56L,6UL,0UL,9UL,0xFBL,1UL,0x6DL},{0xE0L,0xFBL,9UL,1UL,0xDEL,6UL,6UL,0xDEL},{246UL,0x78L,2UL,3UL,0x01L,0xCBL,0x74L,1UL},{9UL,0xABL,0x44L,0x9DL,0x9EL,0x20L,255UL,0xA6L}},{{0x74L,0xABL,254UL,0x24L,254UL,0xCBL,0x8FL,0UL},{0UL,2UL,4UL,254UL,0x20L,1UL,0x44L,0UL},{2UL,1UL,0UL,5UL,0xABL,251UL,0xA6L,0xDEL},{252UL,0x68L,9UL,1UL,6UL,3UL,254UL,3UL},{0UL,252UL,0x8FL,252UL,0UL,255UL,0x9DL,0xCBL},{0x12L,0xA6L,0x56L,1UL,0xE3L,6UL,0x74L,252UL},{0x44L,0x01L,0x56L,0x28L,5UL,0x20L,0x9DL,9UL},{0xE3L,0UL,0x8FL,0xCBL,254UL,0x24L,254UL,0xABL}},{{0x01L,0xE0L,9UL,254UL,0x8FL,4UL,0xA6L,0x01L},{0xE0L,251UL,0UL,6UL,0UL,0x78L,0x44L,0x44L},{1UL,0x68L,4UL,4UL,0x68L,1UL,0x8FL,0x78L},{0UL,0x78L,254UL,0x12L,0x24L,0x86L,255UL,0xCBL},{0x21L,9UL,0x44L,0x12L,0UL,5UL,0x74L,0x78L},{0xDEL,0UL,2UL,4UL,254UL,0x20L,1UL,0x44L},{0UL,0xE3L,255UL,6UL,254UL,0x68L,0x9EL,0x01L},{0xABL,0x56L,1UL,254UL,9UL,0x28L,0xE0L,0xABL}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_6479[i] = (-1L);
        {
            const int8_t l_5928 = 0x04L;
            int8_t l_5945[8][4] = {{0xE1L,1L,0L,0xE1L},{0xAEL,4L,0x8CL,1L},{1L,0xE5L,3L,3L},{4L,4L,0xE1L,(-1L)},{0x8CL,0x0EL,1L,1L},{1L,1L,1L,1L},{4L,1L,0L,1L},{1L,0x0EL,3L,(-1L)}};
            int32_t l_6041 = 0x745A8996L;
            for (l_5913 = (-28); (l_5913 < (-7)); l_5913 = safe_add_func_int32_t_s_s(l_5913, 8))
            {
                g_3935[3][2] = g_68;
                g_2853[0][6][6] = (-6L);
            }
            for (g_506 = 8; (g_506 >= 0); g_506 -= 1)
            {
                int32_t l_6042[7];
                for (i = 0; i < 7; i++)
                    l_6042[i] = 2L;
                      int32_t BhChCg_3486 = (~((((~((g_3463 && g_87))) + ((l_6536 && (-((-(g_3486))))) + g_5225)) ^ (~((~((-(((-(g_204)) | (~((g_506 && ((l_6486 * g_1345) * g_172))))))))))))));
int32_t BhChCbl_6536 = (-((((g_506 << g_1345) && (g_5225 * l_6536)) * (((((~((~(g_3463)))) * (~((g_87 && (~(l_6486)))))) & (~(g_204))) * ((~((~(g_3486)))) + g_172)) ^ BhChCg_3486))));
int32_t BhChCcg_204 = (~(((~(((g_204 + (~(BhChCg_3486))) & ((~(g_3486)) | (g_87 | (~(g_3463))))))) | (((-(g_1345)) | ((g_506 ^ g_5225) + l_6486)) * (BhChCbl_6536 * (~((g_172 << l_6536))))))));
uint32_t BhChCdg_3463 = (-((((l_6536 & ((((~(g_87)) + BhChCg_3486) ^ (-(l_6486))) + (~(g_3486)))) && (~((-((~(((BhChCbl_6536 | g_172) ^ (~(g_506)))))))))) | (((~((g_5225 && g_204))) + (~(BhChCcg_204))) & (~((g_1345 & g_3463)))))));
uint16_t BhChCeg_172 = (~(((~((((((~(BhChCg_3486)) ^ (BhChCcg_204 ^ l_6536)) >> (-((~(l_6486))))) ^ g_3463) | ((g_506 ^ g_5225) & ((-(BhChCbl_6536)) & ((~((g_204 & (BhChCdg_3463 * (~((~(g_87)))))))) ^ (g_172 & g_1345))))))) + (~((~((~(g_3486)))))))));
                               int32_t BGCGCl_6280 = (~(((~(((((g_172 + (~(l_6823))) - (~(((~(l_6486)) + (~(l_6137)))))) | (~((~(g_573))))) && ((~((g_1369 && l_5913))) | (~(((~(g_87)) && g_335))))))) - (~(l_6280)))));
uint32_t BGCGCbl_6137 = (~((((~(((~(l_6280)) + g_172))) / ((g_335 & BGCGCl_6280) - (g_87 ^ l_6137))) && (~(((l_6486 ^ l_6823) & (~((l_5913 / (g_1369 && g_573))))))))));
int8_t BGCGCcl_6823 = (~((((~((~(((((g_87 + l_6823) + (~(l_6137))) | BGCGCl_6280) >> g_172))))) - (((~(g_335)) & (~((~(l_5913))))) + (((~(l_6280)) ^ g_573) & ((~((~(l_6486)))) & (~(BGCGCbl_6137)))))) + g_1369)));
int8_t BGCGCdl_6486 = (~(((~((((BGCGCcl_6823 - (~(g_87))) << (BGCGCl_6280 & (~((l_5913 & (~(l_6823))))))) && (~(((~((((l_6280 | BGCGCbl_6137) >> l_6486) && (~(((~((~(g_573)))) >> (g_335 / g_1369))))))) + g_172)))))) + (~((~(l_6137)))))));
int16_t BGCGCel_5913 = (~(((((l_6280 ^ ((l_6823 - g_1369) | ((~(g_172)) - (l_6486 && BGCGCdl_6486)))) ^ (BGCGCcl_6823 + (l_5913 && (~(g_87))))) | ((BGCGCbl_6137 / (~(BGCGCl_6280))) >> (~((~((g_573 && l_6137))))))) ^ g_335)));
uint16_t BGCGCfg_172 = (~(((~((((~((g_87 && g_335))) + (l_5913 - ((BGCGCbl_6137 | ((g_172 - BGCGCdl_6486) & BGCGCcl_6823)) & ((l_6823 && (BGCGCel_5913 >> BGCGCl_6280)) | (l_6486 - g_573))))) / (~((~((~(l_6137))))))))) ^ ((~((~(g_1369)))) | (~((~(l_6280))))))));
if((BGCGCdl_6486 > BGCGCl_6280)){
BGCGCl_6280 = l_6280;
BGCGCbl_6137 = l_6137;
BGCGCcl_6823 = l_6823;
BGCGCdl_6486 = l_6486;
BGCGCel_5913 = l_5913;
BGCGCfg_172 = g_172;
l_6280 = (~((((((~(g_87)) - (g_335 >> BGCGCdl_6486)) && (~(g_1369))) & (~((~(BGCGCfg_172))))) | ((((~(BGCGCcl_6823)) & ((l_6486 >> g_573) & (((~(BGCGCel_5913)) / l_6137) - l_5913))) && (~(l_6823))) >> (~(((~(((BGCGCbl_6137 / (~(g_172))) + l_6280))) | BGCGCl_6280)))))));
l_6137 = (~((((((BGCGCcl_6823 | ((l_6823 | (g_1369 - l_6137)) & l_6280)) + ((~((~(g_172)))) | (~((~(BGCGCl_6280)))))) | ((~((BGCGCdl_6486 ^ (~(g_573))))) ^ (g_87 && l_5913))) && (~(((BGCGCbl_6137 && l_6486) ^ (BGCGCel_5913 + BGCGCfg_172))))) & (~((~(g_335)))))));
l_6823 = (~(((~((BGCGCfg_172 ^ (~((l_6280 - l_6486)))))) - (~(((~((~(((~((((~(l_6137)) & BGCGCcl_6823) - g_172))) && (~((~(g_335))))))))) - ((~((~(l_5913)))) + ((~((((~(g_573)) + (BGCGCbl_6137 - BGCGCl_6280)) && BGCGCdl_6486))) & (~((((BGCGCel_5913 | g_87) && g_1369) + l_6823)))))))))));
l_6486 = (~(((~(g_172)) & ((~((((~(((~(BGCGCbl_6137)) ^ g_573))) + BGCGCdl_6486) >> (~(BGCGCcl_6823))))) / ((((l_6486 + BGCGCfg_172) | (l_6280 & ((~(g_87)) & BGCGCel_5913))) - (~(((~(l_6137)) ^ g_1369)))) & ((~((l_6823 - (BGCGCl_6280 | l_5913)))) + g_335))))));
l_5913 = (~(((~((~(((((~((~((l_6280 & l_5913))))) | g_172) - (~(BGCGCdl_6486))) && BGCGCl_6280))))) ^ ((~(((~((~((~(l_6486)))))) & ((~(((~(((BGCGCfg_172 << l_6823) - (~((~(g_573))))))) | (BGCGCel_5913 & BGCGCcl_6823)))) + (l_6137 >> ((~(g_1369)) && BGCGCbl_6137)))))) | (g_87 + g_335)))));
g_172 = (~(((((~((~(((~(l_6823)) && BGCGCel_5913))))) + (~(g_573))) / ((~(BGCGCbl_6137)) + BGCGCdl_6486)) / (~((((~(g_172)) && (~((g_335 / g_87)))) ^ (~((~(((((BGCGCcl_6823 ^ g_1369) && BGCGCl_6280) ^ ((~(l_6137)) - l_6280)) / ((l_6486 - (~(l_5913))) | (~(BGCGCfg_172))))))))))))));
if(((BGCGCbl_6137 < l_6823) || (!BGCGCdl_6486))){
printf("l_6280=%lld\n", (long long)l_6280);
goto LABEL_hChCg;
}
if(!(g_87)){
printf("l_6137=%llu\n", (unsigned long long)l_6137);
l_6823 = (~((((l_6137 >> (~(((~(g_573)) / BGCGCcl_6823)))) / ((~(((~(g_172)) / (((l_6280 ^ BGCGCbl_6137) ^ (l_6823 << BGCGCfg_172)) + (BGCGCel_5913 & g_335))))) << (~((g_1369 >> ((BGCGCdl_6486 | l_6486) >> (~(g_87)))))))) - (~((l_5913 | (~(BGCGCl_6280))))))));
goto LABEL_pBpBg;
}
if(!((l_5913 > BGCGCel_5913))){
printf("l_6823=%lld\n", (long long)l_6823);
BGCGCbl_6137 = (~((((~((l_6486 && (BGCGCdl_6486 + BGCGCbl_6137)))) ^ ((~(l_6823)) << (~(g_172)))) ^ ((((~(((~((~(l_5913)))) | (~(g_1369))))) - (~((g_87 / (g_335 - (~(((~(BGCGCel_5913)) - BGCGCl_6280)))))))) & (~(((l_6137 + BGCGCcl_6823) ^ BGCGCfg_172)))) ^ (~((~(((~(l_6280)) >> g_573)))))))));
continue;
}
if(((BGCGCcl_6823<=-1) && (!BGCGCcl_6823))){
printf("l_6486=%lld\n", (long long)l_6486);
BGCGCl_6280 = (~(((g_573 << (~(((l_6486 ^ (~(BGCGCel_5913))) | BGCGCfg_172)))) + (~(((~(g_172)) | (~(((~(l_6280)) - ((~((~((l_6137 - (BGCGCl_6280 && (~(g_335)))))))) >> (((l_5913 - g_1369) + (l_6823 | BGCGCbl_6137)) >> (~((g_87 ^ (BGCGCcl_6823 | (~(BGCGCdl_6486)))))))))))))))));
BGCGCfg_172 = (~(((~((~(((~(((((g_1369 & g_172) && (BGCGCfg_172 & (~(BGCGCcl_6823)))) ^ BGCGCel_5913) << (~((l_6486 ^ BGCGCl_6280)))))) | BGCGCbl_6137))))) - ((~(((~(l_6137)) | ((BGCGCdl_6486 | g_87) - (~(g_335)))))) ^ ((g_573 >> l_6823) & (~((~(((~(l_5913)) - (~(l_6280))))))))))));
l_5913 = (~(((g_87 >> (g_573 && BGCGCbl_6137)) / ((~(((~(BGCGCl_6280)) & (((~(g_1369)) >> (l_5913 & ((~(l_6486)) ^ g_335))) << l_6823)))) && (~((BGCGCel_5913 + ((~((l_6137 >> g_172))) && ((~((BGCGCfg_172 | (~(l_6280))))) && ((~(BGCGCcl_6823)) | (~((~(BGCGCdl_6486))))))))))))));
}
if(!(l_6280)){
printf("l_5913=%lld\n", (long long)l_5913);
BGCGCfg_172 = (~(((~(((~(l_5913)) & ((g_87 ^ (g_172 >> BGCGCbl_6137)) - ((~(BGCGCel_5913)) & ((~((~(g_1369)))) && (l_6137 | BGCGCl_6280))))))) << (~(((~(((~((~(g_335)))) | ((~((l_6823 >> l_6280))) | BGCGCcl_6823)))) - ((BGCGCdl_6486 << (~(g_573))) | (~((~((l_6486 ^ BGCGCfg_172))))))))))));
goto LABEL_hChCg;
}
if(((BGCGCfg_172 < BGCGCl_6280) || (BGCGCl_6280>0))){
printf("g_172=%llu\n", (unsigned long long)g_172);
BGCGCfg_172 = (~(((~(((~(BGCGCdl_6486)) / (~((((~((~(BGCGCel_5913)))) & (((((g_573 && BGCGCcl_6823) / BGCGCfg_172) & g_1369) >> (~(l_6137))) - ((BGCGCbl_6137 | (~(g_335))) - g_172))) && l_6280)))))) | ((~((l_6823 >> BGCGCl_6280))) | (~((l_6486 | (l_5913 ^ g_87))))))));
l_6823 = (~(((BGCGCl_6280 | ((~(((g_172 & (l_6823 && g_573)) << (BGCGCdl_6486 && g_1369)))) >> ((l_6137 && (~(l_6486))) - (~((~((g_335 - BGCGCcl_6823)))))))) & ((~((~(g_87)))) + (((BGCGCfg_172 - (~(BGCGCbl_6137))) >> BGCGCel_5913) & ((~(l_6280)) - (~(l_5913))))))));
}
}
l_6137 = BGCGCbl_6137;
l_6823 = BGCGCcl_6823;
l_6486 = BGCGCdl_6486;
l_5913 = BGCGCel_5913;
g_172 = BGCGCfg_172;
                    if(!(!(BhChCdg_3463))){
BhChCg_3486 = g_3486;
BhChCbl_6536 = l_6536;
                                    if ((l_5929<2708735753U) )
{
if (g_2440) printf("index = [%d]\n", l_6280);
}
                    BhChCcg_204 = g_204;
BhChCdg_3463 = g_3463;
BhChCeg_172 = g_172;
g_3486 = (~(((g_3486 * (((BhChCg_3486 && g_172) * BhChCdg_3463) ^ BhChCcg_204)) ^ ((~((g_3463 | g_87))) & (~((((~((~(l_6536)))) && ((g_1345 ^ BhChCeg_172) << g_506)) & (-((BhChCbl_6536 && ((g_204 | l_6486) ^ g_5225)))))))))));
LABEL_hChCf: l_6536 = (~(((-((((BhChCeg_172 ^ (~((~(g_1345))))) + (g_5225 && BhChCg_3486)) ^ (g_3463 >> (l_6486 + (-(BhChCbl_6536))))))) && ((~(((~((l_6536 * g_204))) && (BhChCdg_3463 && g_172)))) && (g_3486 | (BhChCcg_204 * (~((g_87 && g_506)))))))));
g_204 = (~((((~(((~(((-(BhChCg_3486)) >> (BhChCcg_204 * BhChCbl_6536)))) & (~(((~((l_6536 && g_3486))) | (~(l_6486)))))))) + (~(((~(g_3463)) & (~(g_506)))))) && (~((~(((BhChCeg_172 ^ (g_204 | g_5225)) ^ (~(((-(g_172)) ^ ((~((BhChCdg_3463 + g_87))) & g_1345))))))))))));
g_3463 = (-(((-(((BhChCcg_204 | g_5225) && g_3486))) * (~((((-(g_506)) ^ ((-(((g_3463 && (((l_6486 * BhChCg_3486) * g_172) * ((~(BhChCbl_6536)) ^ (~(l_6536))))) >> (-((-(BhChCeg_172))))))) && (-(((~(g_87)) && g_1345))))) & (~(((~((~((~((-(BhChCdg_3463)))))))) ^ g_204)))))))));
LABEL_hChCg: g_172 = (~((((BhChCg_3486 * g_3463) << (-(g_1345))) ^ (BhChCeg_172 && (~((((BhChCbl_6536 >> g_172) + (~((-((l_6536 * (l_6486 + BhChCcg_204))))))) + ((~((-((g_204 * ((g_87 * BhChCdg_3463) << g_506)))))) && (-((g_5225 & (~(g_3486)))))))))))));
if((!BhChCdg_3463)){
printf("g_3486=%lld\n", (long long)g_3486);
continue;
}
if((!BhChCeg_172)){
printf("l_6536=%lld\n", (long long)l_6536);
{
        transparent_crc(g_34[l_6280], "g_34[l_6280]", l_6762);
        if (l_6762) printf("index = [%d]\n", l_6280);
    }
                    break;
}
if((g_506 < g_5225)){
printf("g_204=%lld\n", (long long)g_204);
l_6536 = (-(((~(((BhChCcg_204 && (-((BhChCg_3486 + (~((~((-(g_506)))))))))) & (((-(g_204)) + (-((~((((-(((~(l_6536)) & (g_87 ^ g_3486)))) && g_5225) + g_1345)))))) + (~(((~(((-(BhChCdg_3463)) | (-(g_172))))) | (~((g_3463 & (BhChCbl_6536 & BhChCeg_172))))))))))) >> (-(l_6486)))));
g_172 = (~((((-((~(g_3486)))) & ((~((BhChCbl_6536 && ((~((BhChCeg_172 && BhChCcg_204))) * (g_204 | BhChCg_3486))))) + (g_87 << ((~(((-((~(g_1345)))) + g_172))) ^ ((~(g_3463)) + g_5225))))) | (~(((BhChCdg_3463 >> l_6536) << ((-(g_506)) ^ l_6486)))))));
BhChCbl_6536 = (~((((~((~(BhChCg_3486)))) >> (((~((BhChCcg_204 + l_6536))) + (-((g_3463 && (~(g_172)))))) + (~(((BhChCdg_3463 >> BhChCeg_172) ^ (g_204 << g_3486)))))) & ((g_506 << ((-(g_87)) ^ g_1345)) << ((-(l_6486)) << (~(((~(g_5225)) && BhChCbl_6536))))))));
}
if((((!l_6486) && (g_1345 > l_6486)) || ((l_6536 > g_5225) && (!BhChCeg_172)))){
printf("g_3463=%llu\n", (unsigned long long)g_3463);
continue;
}
if(((g_5225 > g_506) || (g_87 < g_506))){
printf("g_172=%llu\n", (unsigned long long)g_172);
BhChCbl_6536 = (-((((g_87 & (-(BhChCdg_3463))) >> ((g_3463 & (g_3486 & (-(g_5225)))) >> (~(((~((g_204 * g_1345))) << l_6486))))) ^ (((BhChCcg_204 * (l_6536 + ((BhChCg_3486 ^ BhChCbl_6536) >> g_506))) & g_172) + (-((~((-(BhChCeg_172))))))))));
continue;
}
}
g_3486 = BhChCg_3486;
l_6536 = BhChCbl_6536;
g_172 = BhChCeg_172;
            }
        }
        {
            uint8_t l_6518 = 0xF6L;
            int32_t l_6533 = 1L;
            int16_t l_6548[2][3] = {{0x396CL,0x396CL,0x396CL},{0x32CDL,0x32CDL,0x32CDL}};
            int32_t l_6564[10];
            int8_t l_6625 = (-6L);
            int32_t l_6711 = (-1L);
            uint32_t l_6712 = 0x1EBB175BL;
            int32_t l_6726 = 1L;
            uint32_t l_6800 = 1UL;
            for (i = 0; i < 10; i++)
                { while ((l_5913 > l_6726) )
{
l_5913 -= 1;
}
                    l_6564[i] = 0x3F83C38EL;}
            if ((safe_mod_func_int32_t_s_s(((safe_div_func_int8_t_s_s(0x0EL, l_6167)) & (g_98[0][1] != (g_897 = (safe_sub_func_int16_t_s_s(((l_6136[1] , ((((!g_496[2]) != (l_5986 = (((((g_4689 = (safe_mod_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_s(((safe_add_func_uint32_t_u_u((((safe_unary_minus_func_uint32_t_u(((g_3193 = l_5986) == (safe_add_func_int32_t_s_s(((65534UL > (((~(l_6136[1] , ((((l_6518 && g_469) ^ g_3935[3][0]) <= l_6074) | g_897))) & l_5910) >= l_6518)) && 0x470D685FL), l_6518))))) != g_3172) < g_1798[6][0]), 0UL)) & 4294967287UL), 0)) < g_3486) | l_5913), l_6479[0]))) && 0xE4L) > g_352) == g_9) != g_469))) <= g_1684[0]) != 0xDCL)) & 1UL), g_1370[2]))))), g_13[4])))
                                            ;
            else
            {
                int32_t l_6759 = 0x3A01636DL;
                int32_t l_6768 = 0x6F04516FL;
                int8_t l_6844 = 0L;
                g_1370[1] = (0xB3D2CF8FL & g_13[0]);
                for (g_1368 = 19; (g_1368 >= 30); ++g_1368)
                {
                    int8_t l_6760 = 0L;
                    int32_t l_6772[5];
                    int32_t l_6824 = (-4L);
                    int i;
{
                        int16_t l_6079 = 1L;
                        if (l_5913)
                            break;
for (g_35 = 0; g_35 < 2; g_35 += 1)
                    {
                        l_6479[g_35] = 0x630AF406L;
                    };
                    g_2853[0][6][6] = (safe_sub_func_int8_t_s_s(0L, (g_1352 ^ (safe_sub_func_uint16_t_u_u(l_6079, g_76)))));
                        if (l_6079)
                            continue;
if (g_5512)
                            break;
                    if (l_5835[l_6759])
                            ;;
                    }
                    for (i = 0; i < 5; i++)
                        {
for (g_2440 = 0; g_2440 < 1; g_2440++)
                    g_5210[g_2440] = 0xAFDB92F1L;
                    l_6772[i] = 0L;}
                    if ((g_2852 == (g_1599 = l_6564[6])))
                    {
                        int32_t l_6761 = 0x97130E1AL;
                        uint32_t l_6767 = 0UL;
                        l_5943 = ((g_184 = (~(safe_mod_func_int16_t_s_s((((((+((safe_div_func_int32_t_s_s(((((safe_lshift_func_int16_t_s_u(((((l_6759 = (-1L)) & (l_6761 = (l_5910 , (l_6760 & g_1345)))) < l_6712) | 0x3AL), ((l_6762 = g_1370[0]) , (2UL >= (((safe_div_func_int16_t_s_s((((g_98[2][2] = (g_172 = ((((g_2853[0][6][6] = (safe_div_func_uint32_t_u_u((l_6627 = l_6760), g_3600))) , g_506) ^ l_6767) ^ l_6760))) ^ 1UL) | l_6768), 4L)) && 0x74CC71B1L) , 0x5542L))))) >= g_1370[2]) == 0x03L) & l_6760), g_2440)) ^ 4294967291UL)) , 1UL) <= g_3486) < g_1798[5][2]) > 0xFD327552L), l_6760)))) <= l_6147);
                    }
                    else
                    {
                        int16_t l_6773[2][2][4];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 2; j++)
                            {
                                for (k = 0; k < 4; k++)
                                    ;;
                            }
                        }
                        l_6772[1] = (safe_lshift_func_uint16_t_u_u(g_6771, 8));
                        l_6773[0][1][3] = ((g_68 >= g_13[2]) > l_6261);
{
                        int i, j;
                        g_506 = (safe_mod_func_int32_t_s_s(((l_6759 = ((safe_div_func_int16_t_s_s(g_2580[l_6768][l_6768], l_5910)) || (safe_add_func_uint8_t_u_u((l_6160 = (safe_add_func_uint16_t_u_u(BpBpBcg_3317, ((l_6823 , ((0x55D10309L == ((safe_div_func_int32_t_s_s((safe_div_func_int32_t_s_s((246UL < (((g_3193 < (!((((l_6762 = ((65526UL & 0xCE64L) | (-10L))) ^ 0x6261DD20L) < 0x84L) & l_6759))) != 0x9048L) <= l_6160)), l_6536)), g_2852)) <= g_5512)) , g_6771)) >= 0xE2C7L)))), 0x0EL)))) || 0xB02CL), 2UL));
                    }
                    ;
{
                int16_t l_2060 = 0xDC69L;
                int32_t l_2061 = 0L;
                int32_t l_2062 = (-1L);
                int32_t l_2065 = 0xE44D0044L;
                l_2062 = ((g_172 != (l_2061 = l_2060)) >= 0x51BFL);
                if (l_2060)
                    continue;
                if (k)
                    continue;
                j = (0x49C60D4FL < ((g_759 , (((safe_lshift_func_uint16_t_u_s((0xDFC8L != l_2065), ((safe_sub_func_uint32_t_u_u(g_204, ((l_5929 == ((g_1370[1] = g_759) ^ g_759)) < (l_2065 && g_204)))) > g_759))) || g_76) == l_2065)) < g_759));
            }
                    l_6774[2][6][1] = g_6029;
for (g_3486 = 0; g_3486 < 10; g_3486++)
                l_6564[g_3486] = 0x3F83C38EL;
                    g_2580[2][8] = (255UL >= (-1L));
                    }
for (l_6726 = 0; l_6726 < 1; l_6726++)
                    {
{
                        l_6627 = (safe_sub_func_uint32_t_u_u(4294967288UL, BpBpBg_1369));
                    }
                    ;;}
                    for (g_759 = 0; (g_759 <= 7); g_759 += 1)
                    {
                        uint32_t l_6789 = 0x738E9352L;
                        g_204 = (safe_sub_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(8UL, 0x9698L)) >= ((g_3193 > (safe_div_func_int8_t_s_s(0xEAL, g_506))) | ((safe_add_func_uint8_t_u_u(g_34[0], (g_9 = (safe_div_func_uint16_t_u_u(((((safe_lshift_func_uint8_t_u_u((l_6074 || g_6428), 2)) >= (safe_sub_func_int32_t_s_s((((l_6789 ^ g_5844) || g_34[0]) || g_897), g_2580[0][7]))) | g_4423[3]) | g_573), l_6774[0][7][2]))))) || l_6711))), g_184));
                    }
                    for (l_6147 = 0; (l_6147 == 48); l_6147 = safe_add_func_int8_t_s_s(l_6147, 8))
                    {
                        uint8_t l_6812 = 0xF2L;
                        int32_t l_6821 = 2L;
                        const int32_t l_6822 = 1L;
                        g_2853[1][5][5] = (((safe_mod_func_uint32_t_u_u((248UL ^ (((-1L) < 0x329899BCL) < 0xE371L)), (safe_mod_func_int32_t_s_s(((safe_add_func_int8_t_s_s((((l_6136[0] , (safe_rshift_func_int8_t_s_s(l_6800, 0))) ^ 0x1EB49F35L) >= (((safe_unary_minus_func_uint32_t_u(l_6768)) ^ l_6772[1]) < l_5986)), g_4475)) && (-8L)), 0x148CBAA3L)))) > 0x3D42L) , l_6759);
{
for (i = 29; (i != 28); i = safe_sub_func_int16_t_s_s(i, 7))
                    {
                        l_6627 = g_204;
g_1352 += 1;
                    l_6627 = (((g_4689 = (-5L)) , (~(7UL && ((g_34[0] && g_4475) != (safe_mod_func_uint8_t_u_u(1UL, (safe_div_func_uint16_t_u_u((((g_506 | (1UL ^ (g_4475 <= (l_5910 ^ g_5844)))) >= 0x083A407DL) ^ g_4475), 0x8056L)))))))) >= g_4475);
                    };
                    transparent_crc(g_4423[g_2440], "g_4423[g_2440]", g_2440);
    }
                    ;
{
        for (g_573 = 0; g_573 < 5; g_573++)
        {
g_87 += 1;
                    ;
            ;
        }
    }
                    g_3935[3][2] = 0x29BBFD1AL;
                    }
{
                    int16_t l_4268 = 0x35F2L;
                    l_4268 = g_2852;
                    ;
                }
                    for (l_6318 = 14; (l_6318 == 2); l_6318 = safe_sub_func_uint16_t_u_u(l_6318, 2))
                    {
                        l_6844 = ((safe_lshift_func_int16_t_s_s((((-4L) && 0x69F87D9EL) > ((((safe_div_func_uint8_t_u_u((0x8D41E633L == 0xDFEC0DF3L), (safe_add_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_s(l_6479[0], 3)) == (((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(l_6824, (l_5943 = (safe_mod_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u(l_6536, l_6768)) != 0xD3B415BAL), g_5844))))) && g_1370[2]), 14)) < g_5446[2]) , 0UL)) && g_76), l_5986)))) >= 9UL) | g_34[0]) , 0UL)), 3)) >= (-9L));
                        if (g_1798[5][2])
                            {
if (g_34[0])
                            {
if (g_1370[(l_6500 + 1)])
                    {
                        int i, j;
{
                        uint8_t l_6812 = 0xF2L;
                        int32_t l_6821 = 2L;
                        const int32_t l_6822 = 1L;
                        g_2853[1][5][5] = (((safe_mod_func_uint32_t_u_u((248UL ^ (((-1L) < 0x329899BCL) < 0xE371L)), (safe_mod_func_int32_t_s_s(((safe_add_func_int8_t_s_s((((l_6136[0] , (safe_rshift_func_int8_t_s_s(g_1138, 0))) ^ 0x1EB49F35L) >= (((safe_unary_minus_func_uint32_t_u(l_10)) ^ l_6772[1]) < l_6536)), BpBpBfg_9)) && (-8L)), 0x148CBAA3L)))) > 0x3D42L) , l_10);
                        g_5446[7] = (safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u((BpBpBg_1369 = ((l_5943 = (l_6772[4] , (g_3463 & (l_6844 = ((g_2043 != (safe_lshift_func_int8_t_s_u(((l_6812 | (((g_5446[5] > (g_5844 = l_10)) , (l_10 & ((l_10 = (((safe_mod_func_int16_t_s_s((g_5844 = (safe_rshift_func_uint16_t_u_s((((safe_mod_func_uint8_t_u_u(((((l_6772[0] = g_1138) > l_6821) <= l_10) > 0x2E61L), 0x04L)) >= l_6822) < 0UL), 14))), g_2853[0][6][6])) >= 0xD5ADL) == l_10)) & g_34[0]))) == 0x9711BB0FL)) && g_2580[1][7]), 2))) != (-2L)))))) == l_6825)), g_5210[0])) & BGBGBeg_897), 2)) <= l_6147), l_5913)), g_3935[3][2]));
                        g_3935[3][2] = 0x29BBFD1AL;
                    }
                    ;
                        g_1370[(l_6500 + 1)] = (((g_335 || (safe_add_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(2UL, (((((safe_mod_func_int8_t_s_s((g_76 | ((safe_rshift_func_int8_t_s_s(l_6500, ((((((((((safe_add_func_uint8_t_u_u(0xFCL, ((((safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(g_34[0], (safe_sub_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((((+(4294967295UL > ((~(((l_6760 || l_6800) & g_1138) , 0xC5CA8165L)) == g_34[l_6500]))) & 0xA24B7619L) || 0x35C36BF4L), g_1138)), g_34[l_6500])))), l_6760)) ^ l_10) < (-1L)) >= l_5835[0]))) ^ l_5835[6]) , l_6800) == g_98[4][4]) , 0xF0L) , g_34[0]) >= g_1370[(l_6500 + 1)]) , k) != 1L) || g_3109[2]))) , g_352)), 255UL)) < 1UL) == g_13[1]) < g_4423[2]) > l_6136[0]))) , k), g_1370[(l_6500 + 1)]))) < l_6533) > k);
                        ;
                        g_2580[3][6] = (k = (safe_div_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s((!((safe_add_func_int16_t_s_s(l_10, ((safe_div_func_int8_t_s_s((g_1138 < (9UL ^ (safe_rshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s((l_6760 = ((((g_5446[5] >= (-4L)) < (l_6800 == (l_6760 = (safe_rshift_func_uint16_t_u_u((255UL == l_5888), 13))))) >= ((((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((((l_6600 && 0xF1L) , g_3935[3][2]) & 0x4AL), 4)), g_1370[(l_6500 + 1)])) , l_6500) , (-1L)) & l_10)) | g_1370[(l_6500 + 1)])), g_1138)), g_335)))), 0x99L)) , g_1370[(l_6500 + 1)]))) != 0x11739D61L)), g_496[2])), 5)) , g_76), g_759)));
                    }
                    else
                    {
                        const int32_t l_6407 = 0x90A736CAL;
{
                    for (g_240 = 7; (g_240 >= 1); g_240 -= 1)
                    {
                        int i, j;
                        l_6564[4] = g_1798[(l_6823 + 2)][g_240];
                    }
                }
                    g_2853[0][6][6] = ((k , ((safe_div_func_uint8_t_u_u(BpBpBeg_352, ((l_6800 > g_1370[1]) , l_6533))) , l_5835[0])) , (safe_div_func_uint8_t_u_u(((g_5225 , (safe_rshift_func_uint16_t_u_u(g_2580[0][7], l_6800))) , 0xC0L), l_6407)));
                    };
                    break;}
l_6760 += 1;
                    continue;}
                        return g_573;
                    }
                }
            }
        }
}
inline static int32_t func_2(uint8_t p_3, uint8_t p_4, uint32_t p_5, int32_t p_6)
{
    return p_4;
}
static uint16_t func_15(int16_t p_16, uint8_t p_17)
{
    int32_t l_4564 = (-8L);
    int8_t l_4583 = (-1L);
    int32_t l_4584 = 9L;
    int32_t l_4585 = (-1L);
    int32_t l_4586 = 1L;
    int16_t l_4828 = 0xEB12L;
    int16_t l_4906 = 0L;
    uint32_t l_4921 = 18446744073709551615UL;
    uint32_t l_5181 = 0x7753BD21L;
    int16_t l_5308 = 0x3E8EL;
    int16_t l_5309 = 1L;
    uint16_t l_5358 = 0x6EFBL;
    uint8_t l_5406 = 255UL;
    int32_t l_5599 = (-9L);
    int8_t l_5729 = 0L;
    int32_t l_5763 = 9L;
lbl_5265:
    l_4586 = (safe_sub_func_uint16_t_u_u(65535UL, (safe_rshift_func_int8_t_s_s((((safe_mod_func_int8_t_s_s((l_4564 = ((safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s((safe_add_func_int32_t_s_s((((safe_div_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((l_4564 == (l_4585 = (l_4564 >= (safe_add_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((((g_4475 = g_1684[0]) | (safe_unary_minus_func_int32_t_s((g_573 ^ (+1L))))) | ((0x9F0EB56FL >= (((l_4584 = ((safe_mod_func_int32_t_s_s((((((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(7UL, (((safe_mod_func_uint16_t_u_u(l_4583, g_204)) , (-8L)) >= p_16))), g_184)), l_4564)) , 65535UL) && l_4564) >= l_4583) , l_4583), 0xBB7A2DCAL)) <= 4294967295UL)) ^ l_4564) < l_4564)) | g_496[2])), 4294967293UL)), g_1369)), (-1L)))))) | g_335), 0)), p_17)) ^ g_2853[2][1][4]) & 0x016AFD81L), g_2422)), p_16)), l_4583)), 0xF2CB1982L)) != l_4583)), l_4583)) < l_4583) , 1L), l_4583))));
        return g_897;
}
inline static int16_t func_18(int32_t p_19, uint32_t p_20, const uint16_t p_21)
{
    const uint8_t l_4531 = 0x25L;
    g_2580[0][7] = ((((l_4531 < (((((safe_lshift_func_int16_t_s_u(((safe_add_func_int32_t_s_s((((safe_rshift_func_int8_t_s_s(g_496[2], 3)) >= 0x219F7F5FL) >= (g_2422 = ((((65532UL < (((safe_lshift_func_int8_t_s_s(p_19, ((safe_mul_func_uint8_t_u_u(l_4531, (((0x2DL & (safe_lshift_func_uint8_t_u_s(255UL, 6))) , ((p_20 == p_19) && (-3L))) == 254UL))) > l_4531))) >= p_21) >= 0L)) || p_21) < p_21) && l_4531))), l_4531)) | 1L), l_4531)) < l_4531) != l_4531) && g_3317) != l_4531)) != g_184) >= p_19) < p_20);
                                        while ((g_3317 > l_4531) )
{
{
for (g_573 = 0; g_573 < 1; g_573++)
            g_34[g_573] = 0x22L;
        g_3486 = (9UL >= g_9);
                }
}
        return p_21;
}
inline static uint32_t func_28(uint32_t p_29, int32_t p_30, int32_t p_31, const uint16_t p_32)
{
    uint16_t l_45 = 0x074FL;
    int32_t l_46 = 1L;
    int32_t l_4528 = 0xD2BBE338L;
    g_34[0] = 0xD77CCCAEL;
    g_35 = (-1L);
    l_4528 = (((+(g_35 & (p_31 = g_35))) >= func_37(func_43((l_45 != (l_46 = g_34[0]))), (g_1798[6][5] , g_1798[5][2]), ((safe_div_func_int16_t_s_s((((p_30 < (safe_add_func_int16_t_s_s(0x82FEL, p_30))) != 0x76F37551L) , l_4528), 0x6DD7L)) || g_3486), g_1798[5][2], g_496[2])) < g_9);
    return g_3486;
}
static uint8_t func_37(uint16_t p_38, int32_t p_39, int32_t p_40, int8_t p_41, const int8_t p_42)
{
    uint32_t l_4529 = 3UL;
    int32_t l_4530 = 0x06E3BB14L;
                                                                            if (((l_4530>115587860) || (l_4529>3U)) )
{
{
                        int16_t l_905 = 0L;
                        l_905 = (g_2440 = g_1368);
                    }
}
      while ((l_4530 < l_4529) )
{
for (l_4530 = 0; l_4530 < 9; l_4530++)
    {
        for (g_204 = 0; g_204 < 8; g_204++)
        {
            transparent_crc(g_1798[l_4530][g_204], "g_1798[l_4530][g_204]", g_506);
            if (g_506) {
if (g_275) printf("index = [%d]\n", l_4530);
      printf("index = [%d][%d]\n", l_4530, g_204);}
        }
    };
}
      l_4530 = (l_4529 = g_34[0]);
    return g_1288;
}
inline static uint16_t func_43(int32_t p_44)
{
    int32_t l_3204[2];
    int32_t l_3209 = 0x374484A8L;
    int8_t l_3212[6];
    int32_t l_3230[1];
    int32_t l_3277 = (-1L);
    int16_t l_3278 = 0xB713L;
    int32_t l_3464 = (-8L);
    uint8_t l_3607 = 0xE2L;
    uint16_t l_3794 = 0x4C41L;
    uint32_t l_3803[1][4] = {{0x5B7E570BL,0x5B7E570BL,0x5B7E570BL,0x5B7E570BL}};
    uint32_t l_3887 = 4294967292UL;
    int16_t l_4044 = 0xA478L;
    uint32_t l_4090 = 0x5D8E2B98L;
    uint32_t l_4232 = 0xE31D4304L;
    int32_t l_4272 = 0xC3DE9FD2L;
    int32_t l_4273 = 0L;
    int8_t l_4321 = 0L;
    int32_t l_4476 = 0xC33FFF76L;
    int32_t l_4489[10][1] = {{0xFEB7A305L},{4L},{0xFEB7A305L},{0xFEB7A305L},{4L},{0xFEB7A305L},{0xFEB7A305L},{4L},{0xFEB7A305L},{0xFEB7A305L}};
    int i, j;
                    for (i = 0; i < 2; i++)
        { while ((l_3607>226) )
{
{
                    uint8_t l_5432 = 5UL;
                    if (l_5432)
                        break;
                }
}
                    l_3204[i] = 0x3FE78DE6L;}
    for (i = 0; i < 6; i++)
        { if ((!g_2467) )
{
for (l_3277 = 0; l_3277 < 1; l_3277++)
            g_34[l_3277] = 0x22L;
}
                    if (!((g_1288 > g_3172)) )
{
{
{
                        int8_t l_4920 = 0xD6L;
                        g_2580[0][7] = (((l_4476 & (safe_unary_minus_func_int32_t_s(g_1138))) > (0L != l_3209)) && g_3193);
                        g_184 = l_4920;
                    }
                    return l_3204[1];
            }
}
                    l_3212[i] = 0x7CL;}
                               int16_t BJBJBog_335 = (~(((~((~(g_335)))) ^ (~((~((((((~(g_76)) | g_1352) << (((l_3278 & g_1138) << g_506) / g_469)) >> (~((~((g_759 / (~(g_2467)))))))) ^ (~(l_3794))))))))));
uint32_t BJBJBpg_759 = (~(((~((~(((g_506 >> (((g_76 % g_1352) || l_3794) || BJBJBog_335)) & (~(((~((g_335 | (~(((~(l_3278)) / g_469)))))) ^ (~(g_759)))))))))) || (~(((~((~(g_1138)))) | g_2467))))));
int16_t BJBJBql_3278 = (~((((g_759 | g_2467) / ((~((BJBJBog_335 ^ g_1352))) || l_3794)) ^ (((((~(g_1138)) || (g_76 % BJBJBpg_759)) | (g_506 & l_3278)) ^ g_335) / (~(g_469))))));
int16_t BJBJBrg_1352 = (~(((((~((g_1352 | (g_1138 & g_759)))) % g_2467) || ((l_3794 & ((~(l_3278)) % BJBJBpg_759)) ^ (BJBJBql_3278 ^ (~(BJBJBog_335))))) | (g_335 ^ ((g_76 || g_506) / (~(g_469)))))));
int8_t BJBJBsg_2467 = (~((((BJBJBpg_759 / (~((g_2467 >> ((~((l_3278 % g_506))) / g_76))))) % ((~((~(((~((((~(BJBJBrg_1352)) / (BJBJBql_3278 | g_1352)) / (~(g_1138))))) / (BJBJBog_335 || l_3794)))))) | ((~(g_759)) / (~(g_335))))) / (~((~(g_469)))))));
uint32_t BJBJBtg_1138 = (~((((~((g_76 & g_469))) & (~((((~(g_335)) / (BJBJBrg_1352 & g_2467)) ^ ((~(g_506)) | ((BJBJBpg_759 & (~(g_1138))) / (~(BJBJBog_335)))))))) / (((l_3794 % g_759) % l_3278) << ((BJBJBsg_2467 | g_1352) & (~(BJBJBql_3278)))))));
BJBJBtg_1138 = g_1138;
g_335 = BJBJBog_335;
g_759 = BJBJBpg_759;
g_1352 = BJBJBrg_1352;
g_1138 = BJBJBtg_1138;
                    lbl_3688:
    g_1370[2] = ((g_34[0] ^ (safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(func_51(p_44), (0x71021F5EL != 4294967294UL))) >= 0L), 2))) & (g_1798[3][3] | (((((safe_sub_func_uint16_t_u_u((safe_div_func_int32_t_s_s((((l_3204[1] < ((safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(0x4199L, g_9)), 0x79L)) ^ g_35)) != g_573) , 3L), p_44)), 1UL)) | l_3209) >= l_3209) || l_3209) <= p_44)));
                               int16_t BfBfBg_1352 = (~(((~(g_1352)) ^ (g_1288 & (((~((~(g_4475)))) % (~((g_1368 + (~(g_573)))))) % ((~(l_4321)) ^ ((g_2852 && (g_2043 * g_68)) + g_184)))))));
uint8_t BfBfBbg_4475 = (~(((~((((~(l_4321)) && ((~(g_68)) + (~(g_184)))) * (g_4475 + ((~((~(((g_2043 * g_1288) ^ g_2852))))) * (g_573 & (g_1368 % g_1352))))))) + (~(BfBfBg_1352)))));
int32_t BfBfBcg_573 = (~((((~(((BfBfBbg_4475 % g_68) % ((~(g_2043)) % g_2852)))) * (((l_4321 % g_1352) % ((BfBfBg_1352 & g_1288) * g_4475)) % (~(g_573)))) & (~((~((~(((~(g_1368)) | g_184))))))))));
int16_t BfBfBdg_1288 = (~((((((~(g_4475)) * (g_1288 >> g_184)) && (~((~(g_573))))) * (((l_4321 + g_2852) && g_1352) * ((~((((~(g_68)) | BfBfBcg_573) + (~((~(BfBfBg_1352))))))) ^ g_1368))) ^ (~((~(((~(BfBfBbg_4475)) % (~(g_2043))))))))));
int32_t BfBfBeg_2043 = (~(((~((~((((~(l_4321)) | (((~(g_4475)) & ((~(BfBfBdg_1288)) * g_1368)) && (~((g_2852 * BfBfBcg_573))))) & (((((~((~(g_1352)))) ^ ((~(g_2043)) * (g_573 | g_1288))) * g_68) ^ BfBfBbg_4475) & (~((~(g_184)))))))))) + BfBfBg_1352)));
uint32_t BfBfBfg_184 = (~(((~(((~((BfBfBg_1352 && (~(BfBfBdg_1288))))) + (~((~(((g_1352 & l_4321) ^ (g_573 ^ g_2852))))))))) % (((BfBfBcg_573 + (~(g_4475))) ^ (((g_184 ^ g_68) << g_2043) + (g_1288 ^ BfBfBbg_4475))) + (~((g_1368 ^ (~((~(BfBfBeg_2043)))))))))));
                    BfBfBcg_573 = g_573;
BfBfBeg_2043 = g_2043;
g_1352 = (~(((((BfBfBg_1352 && ((BfBfBcg_573 + BfBfBdg_1288) ^ (~(g_1368)))) & (~((~(g_2043))))) & ((~(g_184)) | (~((~((~(g_68)))))))) * (~((~((~(((((~(g_573)) + (BfBfBbg_4475 * l_4321)) ^ ((g_4475 % (~((g_1352 | BfBfBeg_2043)))) && ((~(g_1288)) * BfBfBfg_184))) & g_2852))))))))));
g_573 = (~((((~(BfBfBcg_573)) && (~((~((BfBfBdg_1288 * g_4475)))))) && (~((~((((~((g_2852 ^ g_573))) + (g_1368 && (((g_2043 && (~(l_4321))) >> ((~(g_1352)) * BfBfBg_1352)) + (~((BfBfBbg_4475 && g_68)))))) + (~((BfBfBeg_2043 & (~((BfBfBfg_184 | ((~(g_184)) & (~(g_1288)))))))))))))))));
                               int32_t BrBrBhg_573 = (~((((~(g_1352)) & (~(((~(g_154)) ^ (~(l_4273)))))) ^ (~((~((g_506 & (~(((l_4321 & (~(g_3486))) & ((g_573 % (g_3193 & l_4090)) | g_184))))))))))));
int8_t BrBrBil_4321 = (~(((~((g_154 || g_3193))) || ((((~(g_184)) & (~(l_4273))) | (g_573 % (~(g_3486)))) & ((l_4321 || (g_506 | (BrBrBhg_573 % l_4090))) << (~(g_1352)))))));
uint32_t BrBrBjl_4090 = (~(((~((((~(BrBrBhg_573)) % (l_4273 | l_4090)) || (g_3193 ^ ((g_154 << (~(g_573))) & g_3486))))) | (~((((g_184 % BrBrBil_4321) & (~((g_506 ^ g_1352)))) % (~(l_4321))))))));
int32_t BrBrBkg_3486 = (~(((((~(((~((g_3193 || l_4090))) % g_506))) % (~(((g_184 & g_573) ^ BrBrBjl_4090)))) | (~((~(((l_4321 >> g_3486) ^ (~(l_4273)))))))) ^ ((~((g_1352 ^ (~(BrBrBil_4321))))) || (BrBrBhg_573 | g_154)))));
int32_t BrBrBlg_506 = (~((((l_4090 || ((g_506 << g_3486) ^ ((~(BrBrBhg_573)) & (g_573 | BrBrBkg_3486)))) ^ (~(((g_1352 ^ (~((~(g_3193))))) | (((l_4321 | g_154) << l_4273) ^ ((~(BrBrBil_4321)) % (~(BrBrBjl_4090)))))))) >> (~((~(g_184)))))));
uint8_t BrBrBmg_3193 = (~(((~(g_184)) || (~((~((((((g_506 || g_3486) % ((~(l_4090)) ^ (BrBrBil_4321 | ((~(g_154)) || l_4321)))) | g_3193) << (~((((~((BrBrBjl_4090 ^ g_573))) & (~((BrBrBlg_506 ^ l_4273)))) ^ (~((~(g_1352)))))))) | ((~((~(BrBrBkg_3486)))) & BrBrBhg_573)))))))));
if(!(((!BrBrBhg_573) && (BrBrBmg_3193<=254)))){
BrBrBhg_573 = g_573;
BrBrBil_4321 = l_4321;
LABEL_rBrBn: BrBrBjl_4090 = l_4090;
                                    if ((!g_1368) )
{
{
                        l_3209 = 0xC846F6BAL;
                    }
}
                    BrBrBkg_3486 = g_3486;
                                   if (!((g_2467<11)))
                    BrBrBlg_506 = g_506;
BrBrBmg_3193 = g_3193;
                               int16_t BkCkCBg_335 = (-(((~((((g_3193 + g_172) & (g_1288 * (-((g_76 * g_335))))) >> (((-(g_240)) & (~((~((-(g_573))))))) * (g_2422 & g_1599))))) * (~((~((~(l_4272)))))))));
int32_t BkCkCCg_573 = (~(((~((~((-(BkCkCBg_335)))))) & ((~((g_2422 && g_335))) * ((~(((~(((g_3193 + g_1599) ^ (~(g_573))))) & ((g_1288 | l_4272) | g_172)))) & ((~(g_240)) && (~(g_76))))))));
int8_t BkCkCDg_2422 = (-(((((l_4272 && g_172) ^ (-(g_2422))) * (-(g_573))) ^ (~(((-((-(BkCkCBg_335)))) * (((BkCkCCg_573 && (g_1288 ^ g_1599)) * (~((g_76 * (g_3193 << g_240))))) && (~(g_335)))))))));
int32_t BkCkCEg_240 = (-(((~((-((~((((-((~((-(g_3193)))))) ^ ((g_1599 + (g_240 * BkCkCDg_2422)) & BkCkCBg_335)) & g_172))))))) & ((((g_76 && l_4272) ^ (-((-(g_2422))))) && (-(((g_1288 * (-(g_573))) + BkCkCCg_573)))) && g_335))));
int16_t BkCkCFg_1288 = (~(((~((((g_76 * (-((~(g_335))))) && (-((((BkCkCBg_335 >> g_240) | (g_573 & g_172)) + (-(((~(BkCkCEg_240)) && (BkCkCDg_2422 | (l_4272 & g_1288))))))))) & (~(((~((BkCkCCg_573 + g_1599))) * (~((~(g_2422)))))))))) + g_3193)));
int32_t BkCkCGl_4272 = (-(((((g_573 ^ BkCkCCg_573) && (g_1599 + (~(BkCkCBg_335)))) + ((~((~(((BkCkCDg_2422 ^ l_4272) + (~(BkCkCFg_1288))))))) * ((~((~(((g_172 + g_76) & (~((BkCkCEg_240 | (g_3193 & g_335))))))))) & g_1288))) ^ (~((~((-((g_240 && (~(g_2422))))))))))));
if((((g_76 > g_3193) && g_76) || ((g_335 < g_1599) && (BkCkCDg_2422<=-60)))){
BkCkCBg_335 = g_335;
BkCkCCg_573 = g_573;
BkCkCDg_2422 = g_2422;
BkCkCEg_240 = g_240;
BkCkCFg_1288 = g_1288;
BkCkCGl_4272 = l_4272;
g_335 = (~(((((((~(((~(BkCkCEg_240)) ^ g_76))) + (~(l_4272))) * g_2422) && ((~(BkCkCCg_573)) && (BkCkCGl_4272 ^ ((-(g_1288)) & (BkCkCDg_2422 | g_573))))) + ((~((g_3193 * g_335))) + (~(g_240)))) | (~((((~((~(g_172)))) * (~(((~(BkCkCBg_335)) && g_1599)))) | (~(BkCkCFg_1288))))))));
g_573 = (-(((~((~((~((g_172 << BkCkCEg_240))))))) & (-((((~(((-((~(BkCkCGl_4272)))) && (~(g_335))))) & (((~((BkCkCCg_573 & (~(g_573))))) && (~(((g_2422 && (~((~(l_4272))))) && (~((g_240 & g_1288))))))) * ((BkCkCDg_2422 * (BkCkCFg_1288 | g_1599)) && g_76))) * ((~(BkCkCBg_335)) && g_3193)))))));
g_2422 = (~(((-((-(((g_240 && g_573) >> ((BkCkCEg_240 && l_4272) + ((g_335 + ((g_1599 & BkCkCBg_335) ^ (-(BkCkCCg_573)))) >> BkCkCDg_2422))))))) | ((~(((~(((-(BkCkCGl_4272)) + ((-((g_3193 ^ g_2422))) && (g_1288 ^ (~(BkCkCFg_1288))))))) | (~((~((~(g_76))))))))) & g_172))));
g_240 = (~((((BkCkCBg_335 & g_1599) << g_573) & ((((BkCkCEg_240 * BkCkCDg_2422) ^ ((-(g_335)) * g_172)) * ((~(((g_1288 ^ g_3193) & g_240))) | g_76)) && (-((-(((-(((-((BkCkCCg_573 | BkCkCGl_4272))) + (~(g_2422))))) && (~((l_4272 ^ (-(BkCkCFg_1288))))))))))))));
g_1288 = (~((((-((~(g_76)))) * ((g_573 >> BkCkCEg_240) + (BkCkCBg_335 + g_335))) ^ (((~(l_4272)) & (-(BkCkCFg_1288))) + ((~(g_1288)) ^ ((~((g_240 ^ ((-((g_3193 && BkCkCCg_573))) ^ g_2422)))) * ((g_1599 && BkCkCGl_4272) + (g_172 << BkCkCDg_2422))))))));
l_4272 = (~((((~(((-(((BkCkCCg_573 & (BkCkCBg_335 + g_335)) | g_1288))) + ((BkCkCEg_240 + g_1599) ^ (~((g_76 >> g_573))))))) && ((((g_240 ^ BkCkCFg_1288) & (~(BkCkCDg_2422))) && BkCkCGl_4272) * (~(g_2422)))) | (((~(l_4272)) + g_3193) >> (~((~(g_172))))))));
if((g_1288>-30229)){
printf("g_335=%lld\n", (long long)g_335);
BkCkCEg_240 = (~(((~((~(((-((((g_1599 | g_573) ^ g_2422) | (~(g_172))))) * ((~(BkCkCDg_2422)) ^ (g_1288 << (~(BkCkCGl_4272))))))))) && (((BkCkCEg_240 >> (g_76 && (-(l_4272)))) | (-((~(((-(((~(g_3193)) ^ g_240))) & (~(((g_335 | BkCkCFg_1288) & BkCkCCg_573))))))))) && BkCkCBg_335))));
for (g_982 = 0; (g_982 != 49); g_982 = safe_add_func_uint16_t_u_u(g_982, 6))
                    {
                        g_5210[0] = 1L;
                        BkCkCEg_240 = g_34[0];
                    };
                    goto lbl_4478;
}
if(((g_573 < BkCkCBg_335) && (!BkCkCFg_1288))){
printf("g_573=%lld\n", (long long)g_573);
goto LABEL_rBrBn;
}
if(((g_573 > BkCkCFg_1288) || !(BkCkCBg_335))){
printf("g_2422=%lld\n", (long long)g_2422);
goto LABEL_rBrBo;
}
                                    while ((!((l_4321 > g_275)) || (g_9>194)) )
{
if (g_506) printf("index = [%d][%d]\n", BrBrBkg_3486, l_4476);
}
                    if((g_1288>-30229)){
printf("g_240=%lld\n", (long long)g_240);
goto LABEL_rBrBo;
}
if((g_76>432544659U)){
printf("g_1288=%lld\n", (long long)g_1288);
BkCkCEg_240 = (-(((-(((-((((BkCkCBg_335 + ((-((BkCkCFg_1288 ^ (g_76 ^ g_573)))) >> BkCkCCg_573)) >> (g_2422 & (BkCkCDg_2422 * ((~(BkCkCEg_240)) & g_1288)))) & (g_335 && l_4272)))) >> (-(g_240))))) & (-((-((~(((~((~(g_1599)))) | (g_172 ^ (BkCkCGl_4272 + (~(g_3193))))))))))))));
BkCkCFg_1288 = (~(((~((-(((~(((BkCkCCg_573 ^ g_573) >> ((g_172 << (~((~(BkCkCEg_240))))) << (~((l_4272 >> g_335))))))) * ((BkCkCGl_4272 << (-(g_1599))) & (-((((-(BkCkCFg_1288)) ^ BkCkCBg_335) & (-(g_76))))))))))) >> ((-((~(((~(g_3193)) + (g_2422 >> g_1288)))))) + (-(((-(BkCkCDg_2422)) << g_240)))))));
goto lbl_3126;
}
}
g_335 = BkCkCBg_335;
g_573 = BkCkCCg_573;
g_2422 = BkCkCDg_2422;
g_240 = BkCkCEg_240;
g_1288 = BkCkCFg_1288;
l_4272 = BkCkCGl_4272;
                    g_573 = (~((((~((BrBrBil_4321 % (~((~((l_4090 || ((~(BrBrBhg_573)) || (BrBrBmg_3193 || BrBrBjl_4090)))))))))) ^ g_506) & ((~((((~(l_4321)) || (BrBrBlg_506 || g_154)) >> (~(g_1352))))) % (~((((~(g_3486)) % ((g_184 >> l_4273) << ((~((~(g_3193)))) || (~(BrBrBkg_3486))))) >> (~(g_573)))))))));
l_4321 = (~(((((l_4321 | ((~(g_3193)) || (l_4273 | (~(BrBrBmg_3193))))) ^ (~(BrBrBkg_3486))) || (~(BrBrBlg_506))) || (~(((BrBrBjl_4090 ^ g_573) & (((((~((~(l_4090)))) % g_184) >> g_3486) || (g_506 || g_1352)) & (~(((BrBrBil_4321 | (~(BrBrBhg_573))) | g_154))))))))));
l_4090 = (~((((~((((~(g_506)) & ((~(l_4273)) || BrBrBlg_506)) || ((~(g_1352)) | (BrBrBil_4321 || ((~(g_154)) ^ (g_3486 << g_184))))))) | ((BrBrBhg_573 || BrBrBmg_3193) << (((g_3193 % l_4321) || BrBrBkg_3486) & (l_4090 | g_573)))) % BrBrBjl_4090)));
g_3486 = (~((((g_573 ^ BrBrBhg_573) ^ ((((~((~(((~(l_4090)) | (BrBrBmg_3193 & (BrBrBjl_4090 >> l_4273))))))) << ((l_4321 || BrBrBkg_3486) & g_1352)) & (~((~(g_506))))) ^ ((~((g_3193 >> BrBrBlg_506))) ^ ((g_154 >> g_3486) << g_184)))) | (~(BrBrBil_4321)))));
g_506 = (~(((~(((~(((~((((~((l_4090 ^ l_4321))) || BrBrBlg_506) & (BrBrBkg_3486 % (~(g_184)))))) << ((~(((~(g_573)) ^ (~(g_154))))) & ((((~(g_506)) ^ (g_3193 % BrBrBmg_3193)) | (~(BrBrBil_4321))) % (BrBrBhg_573 || (~(l_4273)))))))) ^ (~((~(g_1352))))))) << (~((~((~((~((g_3486 || BrBrBjl_4090))))))))))));
LABEL_rBrBo: g_3193 = (~(((~((((~(((g_184 ^ (~((~(g_506))))) || (g_3193 >> BrBrBlg_506)))) & (((g_573 ^ ((BrBrBmg_3193 || BrBrBjl_4090) % l_4090)) >> (l_4321 % (~(g_154)))) ^ ((~((g_1352 || g_3486))) % (~(l_4273))))) || ((~(BrBrBkg_3486)) & BrBrBhg_573)))) % (~(BrBrBil_4321)))));
if(!((l_4273 < BrBrBlg_506))){
;
g_3193 = (~(((((~(((~(((~(BrBrBmg_3193)) % (g_506 << BrBrBlg_506)))) & ((l_4273 || (l_4090 << g_1352)) & (~(BrBrBil_4321)))))) || (((~((g_3193 | g_573))) & BrBrBkg_3486) ^ BrBrBhg_573)) & (~((~((~(g_184))))))) << ((~(l_4321)) >> (~(((g_3486 & (~(BrBrBjl_4090))) >> g_154)))))));
goto lbl_3967;
}
                                   if ((g_204<=9))
                    { if ((g_1138 < g_2852))
                    if(((!g_184) && ((g_506 > l_4321) && (!BrBrBmg_3193)))){
{
                        uint32_t l_666 = 4294967292UL;
                        int32_t l_677 = 0xC2919148L;
                        j = (g_5844 == (safe_lshift_func_int16_t_s_u((l_666 >= 0xCA1FA15DL), 10)));
                        l_4476 = (g_2043 = (~(!(g_5844 <= (((0xBD3024CCL || (0x0624L == l_3607)) <= 0UL) > (g_472 == (safe_add_func_int16_t_s_s(((BfBfBcg_573 = (((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((l_677 = 1UL), ((safe_div_func_uint8_t_u_u((l_3607 < (l_666 || l_3607)), 0x7AL)) > l_3607))), 0xCE57L)) & 0xC6L) && 1L)) >= l_3607), l_4272))))))));
                    }
                    ;
BrBrBlg_506 = (~((g_154 >> ((((g_506 ^ (~(g_1352))) ^ (g_184 << (~((g_3193 >> (BrBrBkg_3486 || (~((~(l_4321)))))))))) || (~((((~(BrBrBlg_506)) ^ l_4090) & (~(g_3486)))))) || (((BrBrBhg_573 << (BrBrBjl_4090 >> l_4273)) || g_573) | (BrBrBil_4321 || BrBrBmg_3193))))));
goto lbl_4478;
}}
                                    while ((g_1138 > g_3463) )
{
if (BJBJBpg_759)
                        goto lbl_3688;
}
                    if((g_3193<255)){
printf("l_4090=%llu\n", (unsigned long long)l_4090);
goto LABEL_rBrBn;
}
if(((!l_4090) && g_184)){
printf("g_506=%lld\n", (long long)g_506);
if (l_4272) printf("index = [%d]\n", p_44);
                    BrBrBlg_506 = (~(((~(((((l_4273 % (~((g_573 % l_4321)))) & g_184) | (~(((~((BrBrBjl_4090 | g_506))) | ((BrBrBmg_3193 || g_1352) << l_4090))))) & (g_154 ^ (BrBrBlg_506 >> BrBrBhg_573))))) % (~(((BrBrBil_4321 << (~(BrBrBkg_3486))) || ((~(g_3193)) >> g_3486)))))));
goto lbl_3517;
}
if(!(!((l_4090>3139196721U)))){
{
                        int i, j;
                        return l_3803[g_1599][g_1599];
                    }
                    printf("g_3193=%llu\n", (unsigned long long)g_3193);
g_573 = (~(((~((~((g_3193 << BrBrBlg_506))))) ^ ((~((~((~(g_506)))))) ^ (~((((~(BrBrBhg_573)) | ((~(g_154)) ^ (~((l_4090 & g_1352))))) || ((~(BrBrBmg_3193)) ^ ((((l_4273 % (~((BrBrBjl_4090 % BrBrBil_4321)))) ^ g_3486) >> BrBrBkg_3486) | (g_184 << (~((l_4321 || g_573)))))))))))));
;
}
}
                                   if ((g_472<=49))
                    g_573 = BfBfBcg_573;
                                   if ((((g_2467>11) || (!g_472)) || !((!g_3172))))
                    g_2043 = BfBfBeg_2043;
                    lbl_3967:
    {
        int16_t l_3251 = 0x89D3L;
        int32_t l_3252[7] = {0L,0L,0L,0L,0L,0L,0L};
        int8_t l_3274 = (-7L);
        int16_t l_3275 = 1L;
        uint32_t l_3276 = 0xFB4D153BL;
        int8_t l_3374 = 0xD8L;
        int32_t l_3420[8][9] = {{0x87B3A4D1L,0L,(-5L),1L,1L,(-5L),0L,0x87B3A4D1L,5L},{0x87B3A4D1L,1L,5L,0x87B3A4D1L,0L,(-5L),1L,1L,(-5L)},{0x1045D443L,1L,(-1L),1L,0x1045D443L,0x0E5D44BBL,1L,(-4L),5L},{1L,0L,(-1L),(-4L),0L,5L,0L,(-4L),(-1L)},{0x1045D443L,0x1045D443L,5L,(-4L),1L,0x0E5D44BBL,0x1045D443L,1L,(-1L)},{0x87B3A4D1L,0L,(-5L),1L,1L,(-5L),0L,0x87B3A4D1L,5L},{0x87B3A4D1L,1L,5L,0x87B3A4D1L,0L,(-5L),1L,1L,(-5L)},{0x1045D443L,1L,(-1L),1L,0x1045D443L,0x0E5D44BBL,1L,(-4L),5L}};
        uint8_t l_3544[5][9][5] = {{{255UL,0xBBL,0xA8L,0x94L,8UL},{1UL,5UL,0xF4L,0xF4L,5UL},{0x83L,0xE5L,249UL,6UL,0x47L},{0x2EL,5UL,0x0AL,0UL,0x60L},{0x32L,0xE7L,0x93L,3UL,0xE7L},{0UL,249UL,1UL,0xD6L,254UL},{0x18L,0x44L,0xBBL,0x31L,0xE7L},{0x38L,0x60L,248UL,247UL,0x60L},{0UL,254UL,3UL,0x31L,0UL}},{{0xD3L,255UL,255UL,0xD6L,251UL},{0x32L,255UL,3UL,3UL,255UL},{0x5AL,249UL,248UL,0UL,254UL},{0UL,255UL,0xBBL,0x47L,0x44L},{0x38L,255UL,1UL,247UL,255UL},{0UL,254UL,0x93L,0xE5L,0UL},{0x5AL,0x60L,255UL,0xCBL,255UL},{0x32L,0x44L,0xC2L,3UL,0x44L},{0xD3L,249UL,247UL,0xCBL,254UL}},{{0UL,0xE7L,0xBBL,0xE5L,255UL},{0x38L,251UL,247UL,247UL,251UL},{0x18L,254UL,0xC2L,0x47L,0UL},{0UL,251UL,255UL,0UL,0x60L},{0x32L,0xE7L,0x93L,3UL,0xE7L},{0UL,249UL,1UL,0xD6L,254UL},{0x18L,0x44L,0xBBL,0x31L,0xE7L},{0x38L,0x60L,248UL,247UL,0x60L},{0UL,254UL,3UL,0x31L,0UL}},{{0xD3L,255UL,255UL,0xD6L,251UL},{0x32L,255UL,3UL,3UL,255UL},{0x5AL,249UL,248UL,0UL,254UL},{0UL,255UL,0xBBL,0x47L,0x44L},{0x38L,255UL,1UL,247UL,255UL},{0UL,254UL,0x93L,0xE5L,0UL},{0x5AL,0x60L,255UL,0xCBL,255UL},{0x32L,0x44L,0xC2L,3UL,0x44L},{0xD3L,249UL,247UL,0xCBL,254UL}},{{0UL,0xE7L,0xBBL,0xE5L,255UL},{0x38L,251UL,247UL,247UL,251UL},{0x18L,254UL,0xC2L,0x47L,0UL},{0UL,251UL,255UL,0UL,0x60L},{0x32L,0xE7L,0x93L,3UL,0xE7L},{0UL,249UL,1UL,0xD6L,0x2EL},{0xD8L,0UL,0xE7L,0UL,0xBDL},{0UL,255UL,0UL,0UL,255UL},{0xA5L,255UL,0x9CL,0UL,0x76L}}};
        uint8_t l_3658[1];
lbl_3517:
        g_2580[3][2] = g_3193;
        for (g_2422 = 19; (g_2422 != 22); ++g_2422)
        {
            uint32_t l_3233 = 0x31AC0EF1L;
            uint8_t l_3238 = 0x2BL;
            uint32_t l_3271 = 0x1A71B093L;
            int32_t l_3279 = 0x4DE7E067L;
            l_3230[0] = (l_3233 && (g_2467 == ((safe_mod_func_uint16_t_u_u((p_44 ^ (g_87 > ((0UL < ((((l_3238 , ((safe_rshift_func_uint8_t_u_s(0xA5L, (~g_68))) != (p_44 , p_44))) > 0L) , g_1352) <= g_1368)) >= 0x6755L))), g_1798[8][7])) , 0x61CA2EBDL)));
            if ((g_98[2][4] != (-9L)))
            {
                l_3279 = (((p_44 <= ((~(safe_sub_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(((l_3276 = ((safe_add_func_int16_t_s_s(((l_3252[3] = l_3251) & (g_3172 = ((safe_mod_func_uint32_t_u_u(((((safe_add_func_uint32_t_u_u(((safe_div_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((+p_44), (safe_add_func_int16_t_s_s(0x9BD4L, ((((safe_add_func_int32_t_s_s((!((safe_sub_func_int8_t_s_s((g_34[0] ^ (safe_lshift_func_int8_t_s_u(l_3271, 3))), (0x9FL ^ (7UL < (((safe_rshift_func_uint16_t_u_u(0x848AL, 8)) <= l_3233) <= l_3274))))) > (-1L))), p_44)) , p_44) || l_3275) | p_44))))), l_3230[0])) | 0L), l_3271)) <= p_44) || 0x01L) ^ l_3275), g_335)) == 0L))), g_496[0])) && l_3209)) | l_3238), 3)) >= l_3275), l_3277))) == 1UL)) != l_3278) && p_44);
                return g_98[1][3];
            }
            else
            {
                uint8_t l_3298 = 0x39L;
                l_3252[4] = (l_3298 = (safe_sub_func_uint32_t_u_u((0xAF60L <= ((safe_mod_func_uint8_t_u_u((0x53B50BCEL <= ((l_3279 || g_87) < (((safe_mod_func_uint32_t_u_u((g_1368 = (((p_44 <= (safe_lshift_func_int8_t_s_s(p_44, ((4294967287UL ^ (g_1684[0] <= ((safe_add_func_uint32_t_u_u(((safe_add_func_int16_t_s_s(l_3212[5], l_3209)) < 9UL), 0x4380B9C8L)) , 0UL))) <= 0xFDL)))) > p_44) , 0x34A561BDL)), p_44)) < 0UL) != 4294967295UL))), l_3252[6])) | g_2580[0][3])), 0x0CF43AC6L)));
            }
        }
    }
lbl_4478:
    for (g_3172 = 0; (g_3172 <= (-14)); g_3172 = safe_sub_func_uint8_t_u_u(g_3172, 8))
    {
        uint32_t l_3911[9] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
        int32_t l_3948 = 6L;
        int i;
        for (g_2852 = 0; (g_2852 <= 2); g_2852 += 1)
        {
            uint32_t l_3914 = 0x0A62ABD5L;
            uint8_t l_3962 = 0xAFL;
            uint8_t l_4022 = 2UL;
            int32_t l_4023 = 0x83182F71L;
            uint16_t l_4114[5][6] = {{65535UL,65535UL,0xA748L,0xA748L,65535UL,65535UL},{65535UL,0xA748L,0xA748L,65535UL,65535UL,0xA748L},{65535UL,65535UL,0xA748L,0xA748L,65535UL,65535UL},{65535UL,0xA748L,0xA748L,65535UL,65535UL,0xA748L},{65535UL,65535UL,0xA748L,0xA748L,65535UL,65535UL}};
            int16_t l_4133[6] = {(-1L),0x8FBCL,(-1L),(-1L),0x8FBCL,(-1L)};
            int i, j;
            l_3911[0] = ((safe_mod_func_uint16_t_u_u((((g_1370[g_2852] || g_1370[g_2852]) && (g_1370[g_2852] , 0UL)) || (l_3607 >= 0x4FL)), g_2422)) > (safe_lshift_func_uint16_t_u_s(g_1352, 3)));
            if ((g_1370[g_2852] > (g_1370[g_2852] < ((safe_mod_func_int16_t_s_s(l_3914, ((l_3911[0] == ((safe_div_func_uint16_t_u_u(((((((0xACF8L != (((l_3914 , (safe_lshift_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s(((l_3204[0] == (1UL | (p_44 , g_759))) == 0xB6L), l_3911[7])), g_1370[g_2852])) >= 0x2AL) ^ 0xFAL), 0))) && p_44) && g_1370[g_2852])) && p_44) ^ g_68) <= 0UL) ^ l_3278) & g_204), g_2043)) | l_3803[0][0])) , p_44))) , 0x41L))))
            {
                int8_t l_3936 = (-1L);
                int32_t l_3945[3][7] = {{(-1L),0x098C8E7EL,(-1L),(-1L),0x098C8E7EL,(-1L),0x098C8E7EL},{0L,(-1L),(-1L),0L,0x098C8E7EL,0L,(-1L)},{1L,1L,(-1L),(-1L),(-1L),1L,1L}};
                int32_t l_3950[2][8][5] = {{{0x1B138628L,(-1L),(-10L),(-1L),0x1B138628L},{0xA2F7BFCFL,1L,0x521F5C0AL,0x237FC685L,0xA2F7BFCFL},{0x952DE3C7L,(-1L),(-1L),(-1L),0x952DE3C7L},{0xA2F7BFCFL,0x237FC685L,0x521F5C0AL,1L,0xA2F7BFCFL},{0x1B138628L,(-1L),(-10L),(-1L),0x1B138628L},{0xA2F7BFCFL,1L,0x521F5C0AL,0x237FC685L,0xA2F7BFCFL},{0x952DE3C7L,(-1L),(-1L),(-1L),0x952DE3C7L},{0xA2F7BFCFL,0x237FC685L,0x521F5C0AL,1L,0xA2F7BFCFL}},{{0x1B138628L,(-1L),(-10L),(-1L),0x1B138628L},{0xA2F7BFCFL,1L,0x521F5C0AL,0x237FC685L,0xA2F7BFCFL},{0x952DE3C7L,(-1L),(-1L),(-1L),0x952DE3C7L},{0xA2F7BFCFL,0x237FC685L,0x15CDBCF7L,2L,0x237FC685L},{(-2L),0xC6CFC406L,0x3C14CD7EL,0xC6CFC406L,(-2L)},{0x237FC685L,2L,0x15CDBCF7L,0x21F454D6L,0x237FC685L},{4L,0xC6CFC406L,0x2AAAF7BFL,0xC6CFC406L,4L},{0x237FC685L,0x21F454D6L,0x15CDBCF7L,2L,0x237FC685L}}};
                int16_t l_4033 = (-1L);
                int8_t l_4115 = 2L;
                int i, j, k;
                if (p_44)
                {
                    int16_t l_3949[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_3949[i] = 0x5E55L;
                    g_2853[0][6][6] = (safe_add_func_uint16_t_u_u(((g_1352 = (safe_lshift_func_uint16_t_u_u(g_1684[0], l_3204[1]))) < (0x4935L < 0x9949L)), (((p_44 ^ (safe_div_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_s((((g_35 & (g_240 >= (safe_rshift_func_int8_t_s_s((-1L), 7)))) || ((g_172 = g_98[1][1]) , g_3935[3][2])) && g_2580[3][9]), 13)) == l_3914) == 0xF6L), p_44))) , l_3936) , p_44)));
                    l_3950[1][1][0] = (((p_44 != (l_3948 = (safe_rshift_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(((g_2467 & (g_1370[g_2852] = (safe_div_func_int16_t_s_s(1L, ((l_3945[1][2] = (p_44 | (safe_sub_func_uint32_t_u_u(g_2580[0][7], (p_44 | (-10L)))))) | (safe_mod_func_int8_t_s_s(0x9AL, ((4294967295UL > 4294967295UL) , 0x46L)))))))) != p_44), 0UL)) , l_3945[1][2]), p_44)))) != 4UL) && l_3949[0]);
                }
                else
                {
                    int32_t l_3976 = 1L;
                    int32_t l_3979 = 0L;
                    for (l_3209 = 0; (l_3209 >= 29); l_3209 = safe_add_func_int32_t_s_s(l_3209, 9))
                    {
                        uint8_t l_3963[4];
                        int32_t l_3964 = 0L;
                        int i;
                        for (i = 0; i < 4; i++)
                            l_3963[i] = 255UL;
                        l_3964 = (safe_add_func_uint16_t_u_u((l_3911[8] == ((safe_unary_minus_func_int16_t_s((-1L))) | (((l_3963[2] = ((safe_lshift_func_uint16_t_u_u((((safe_add_func_int32_t_s_s(0x042EF43CL, p_44)) != (((safe_add_func_int16_t_s_s(((p_44 != l_3945[1][2]) | l_3962), (((p_44 == (g_496[1] != 5L)) >= 255UL) | 2L))) != l_3950[1][3][1]) || 6UL)) | 1UL), g_3935[4][0])) | 0xC54B21BCL)) > l_3911[0]) == 0x68L))), l_3950[0][6][4]));
                    }
                    for (g_172 = 0; (g_172 >= 44); ++g_172)
                    {
                        uint32_t l_3984 = 18446744073709551611UL;
                        if (g_1599)
                            goto lbl_3688;
                        if (g_3172)
                            goto lbl_3967;
                        g_204 = ((g_1370[g_2852] = ((((safe_sub_func_int16_t_s_s(((g_35 ^ p_44) ^ (safe_rshift_func_uint8_t_u_u(((g_1684[0] >= (safe_rshift_func_uint8_t_u_u(g_184, (safe_lshift_func_int8_t_s_u((((((((((l_3976 = g_3935[1][1]) , p_44) < 4294967286UL) , (0x6040B6EAL || ((safe_div_func_uint8_t_u_u(p_44, (-2L))) >= l_3204[1]))) | g_2580[0][7]) ^ l_3979) <= l_3464) == p_44) || g_506), p_44))))) && g_34[0]), 5))), 0x3E6CL)) || g_9) < g_1370[g_2852]) < 5L)) , g_9);
                        g_1370[g_2852] = (safe_add_func_int16_t_s_s(((l_3984 = (safe_mod_func_uint8_t_u_u(g_3193, 0xCEL))) && l_3984), g_1370[2]));
                    }
                }
                l_3277 = ((((((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((g_1684[0] = (g_1370[g_2852] == ((g_1370[g_2852] , (safe_rshift_func_uint16_t_u_u((l_3948 && (g_3600 || (safe_add_func_int8_t_s_s((((safe_div_func_int8_t_s_s((safe_mod_func_int8_t_s_s((l_4023 = ((safe_lshift_func_uint16_t_u_s((g_1288 >= g_759), ((((l_3914 != (safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((((((safe_rshift_func_int8_t_s_u(((((safe_div_func_uint16_t_u_u((((g_34[0] = (~5L)) , (safe_rshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(((safe_sub_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(0x04L, g_1370[g_2852])) , g_184), l_3945[1][3])) < g_1798[5][2]), 0x96E2L)) > 65530UL), l_4022)) & l_3209), g_2467)), 4))) <= 0x36A0L), l_3277)) < p_44) == g_506) > g_3172), p_44)) , p_44) >= g_204) <= g_1684[0]) & l_3945[1][2]), g_2422)), p_44))) & 0xCDE5L) != g_9) & p_44))) | 0UL)), l_4022)), g_184)) | l_3945[0][1]) && 0x04L), g_98[1][3])))), 15))) < p_44))), l_3936)), l_3911[7])) && g_2580[0][7]) , 0x92928529L) < p_44) != g_352) >= l_3911[5]);
                for (l_3794 = 5; (l_3794 >= 4); l_3794 = safe_sub_func_uint32_t_u_u(l_3794, 1))
                {
                    uint32_t l_4028 = 18446744073709551610UL;
                    for (l_3278 = 29; (l_3278 >= (-13)); --l_3278)
                    {
                        l_3948 = (p_44 && p_44);
                    }
                    l_4028 = 0x54DA928EL;
                    if ((safe_sub_func_int16_t_s_s((safe_add_func_uint8_t_u_u(g_897, ((g_472 = ((((l_4033 = g_1288) != (safe_lshift_func_uint8_t_u_u((((-1L) != (safe_lshift_func_int8_t_s_s(0x37L, 1))) , (((((((((l_4028 , ((safe_lshift_func_int8_t_s_u(p_44, (l_3948 = ((safe_rshift_func_int8_t_s_u((-1L), ((65528UL | (g_3935[3][2] | 0x67L)) || 65535UL))) < l_3794)))) , g_1370[g_2852])) == p_44) , g_3109[0]) , l_4028) | 0UL) & p_44) >= 0x4740L) , 0x4A6453C2L) >= 4294967295UL)), g_2853[0][6][6]))) & 247UL) , 255UL)) , p_44))), p_44)))
                    {
                        uint32_t l_4042 = 0xF2B5B59FL;
                        int32_t l_4043[8][7][2] = {{{0L,0x6301DF73L},{0L,0L},{0xF22F229CL,0L},{0L,0x6301DF73L},{0L,0L},{0xF22F229CL,0L},{0L,0x6301DF73L}},{{0L,0L},{0xF22F229CL,0L},{0L,0x6301DF73L},{0L,0L},{0xF22F229CL,0L},{0L,0x6301DF73L},{0L,0L}},{{0xF22F229CL,0L},{0L,0x6301DF73L},{0L,0L},{0xF22F229CL,0L},{0L,0x6301DF73L},{0L,0L},{0xF22F229CL,0L}},{{0L,0x6301DF73L},{0L,0L},{0xF22F229CL,0L},{0L,0x6301DF73L},{0L,0L},{0xF22F229CL,0L},{0L,0x6301DF73L}},{{0L,0L},{0xF22F229CL,0L},{0L,0x6301DF73L},{0L,0L},{0xF22F229CL,0L},{0L,0x6301DF73L},{0L,0L}},{{0xF22F229CL,0L},{0L,0x6301DF73L},{0L,0L},{0xF22F229CL,0L},{0L,0x6301DF73L},{0L,0L},{0xF22F229CL,0L}},{{0L,0x6301DF73L},{0L,0L},{0xF22F229CL,0L},{0L,0x6301DF73L},{0L,0L},{0xF22F229CL,0L},{0L,0x6301DF73L}},{{0L,0L},{0xF22F229CL,0L},{0L,0x6301DF73L},{0L,0L},{0xF22F229CL,0L},{0L,0x6301DF73L},{0L,0L}}};
                        int i, j, k;
                        l_4043[6][2][0] = l_4042;
                    }
                    else
                    {
                        uint8_t l_4088 = 0x88L;
                        int32_t l_4089 = 0xC81261FAL;
                        if (l_4044)
                            break;
                        g_3935[3][2] = ((safe_add_func_int8_t_s_s(((((((-1L) > 0xDC84L) > (safe_sub_func_uint8_t_u_u(((((((safe_add_func_uint16_t_u_u((l_4089 = (safe_rshift_func_int8_t_s_u(((((safe_mod_func_uint32_t_u_u((g_2852 == (safe_add_func_uint8_t_u_u(((l_3945[1][2] = (g_1370[g_2852] = ((safe_add_func_int8_t_s_s(((((safe_mod_func_int16_t_s_s((((((l_3950[1][1][0] = (safe_add_func_int32_t_s_s(((((l_3948 & (safe_sub_func_int8_t_s_s((((safe_add_func_int32_t_s_s(((safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(2UL, ((+(safe_add_func_uint32_t_u_u((g_3463 = p_44), (safe_div_func_uint8_t_u_u(((((safe_lshift_func_int8_t_s_u(((((p_44 >= ((safe_div_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_add_func_int32_t_s_s((-1L), p_44)) != p_44), 12)), g_68)) , 0L)) != g_982) <= 1UL) ^ p_44), 0)) , p_44) > g_1370[g_2852]) >= (-1L)), p_44))))) , g_759))), 6)), p_44)) , 0L), g_1684[0])) , p_44) <= 6UL), p_44))) <= g_573) , 253UL) && 0x91L), l_3911[0]))) < 0xF7L) >= 1L) <= l_3230[0]) , 0xC0B5L), 4UL)) | g_496[2]) || l_4028) ^ 0x8F88C931L), l_4088)) < l_3948))) != g_1369), l_4028))), 0x103084B7L)) >= 0x38L) <= l_4028) >= p_44), 0))), 0x84C0L)) | g_172) || g_3193) == p_44) < g_34[0]) == l_4088), l_3212[5]))) & 0x8146L) ^ l_4090) , 5L), l_3936)) , 1L);
                        l_4023 = l_3204[1];
                    }
                    g_3935[3][2] = ((safe_div_func_int16_t_s_s(((((((g_2580[3][0] = (l_3464 = p_44)) & (g_204 = p_44)) >= (safe_div_func_int32_t_s_s((safe_sub_func_int16_t_s_s((0x2C5DL > (safe_lshift_func_int8_t_s_s(p_44, 3))), ((g_3463 > ((((safe_sub_func_int16_t_s_s(1L, ((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(p_44, 11)), (safe_mod_func_int16_t_s_s(((l_3948 = (l_4115 = (((g_34[0] = ((g_573 = l_3936) , (safe_sub_func_uint16_t_u_u(((~(l_4114[1][4] = 5UL)) , 65535UL), l_3204[1])))) & g_87) || l_3911[6]))) != g_76), l_3803[0][3])))) , g_3935[3][2]), g_3317)), (-1L))) | g_9))) && l_4114[4][0]) > p_44) ^ 0xB4L)) || 1UL))), g_2852))) , 0x6B317E62L) && g_506) ^ 0UL), p_44)) < p_44);
                }
            }
            else
            {
                int32_t l_4132 = 0x864A84DEL;
                l_4133[5] = (((((((safe_sub_func_int32_t_s_s(((safe_add_func_int16_t_s_s(g_98[1][3], (g_3317 = ((0x728DF7C8L & (safe_add_func_int16_t_s_s((((safe_lshift_func_int8_t_s_s(p_44, (g_2422 = 0x42L))) > (p_44 != p_44)) <= ((g_1370[g_2852] || 1L) , (safe_rshift_func_int16_t_s_u((((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(0x1FL, 5)), 0x11C01581L)) == 65535UL) & l_4090), p_44)))), l_4090))) != g_496[2])))) >= l_3911[0]), 0x7973AEEBL)) , l_3212[4]) || 0UL) <= l_4132) > p_44) <= p_44) >= g_1370[g_2852]);
            }
            l_4023 = (g_1370[2] = (g_2580[3][1] = 7L));
        }
        if (l_3204[0])
            break;
        g_1370[2] = ((safe_div_func_int16_t_s_s(g_154, (safe_div_func_uint32_t_u_u(0x56CA83FCL, g_3935[6][3])))) , (safe_rshift_func_uint8_t_u_u((l_3948 = (((p_44 > ((((((((l_3230[0] = (+(g_472 ^ p_44))) != (l_3204[1] ^ (safe_add_func_int32_t_s_s(((safe_div_func_int8_t_s_s((0x76F09328L ^ (safe_add_func_uint32_t_u_u(p_44, p_44))), 0xA8L)) < p_44), p_44)))) <= 2L) && p_44) && p_44) && l_3209) <= 0x80D9DA1EL) < g_1798[7][6])) || g_1798[6][3]) ^ g_469)), 7)));
        for (g_982 = (-15); (g_982 != 5); g_982 = safe_add_func_uint32_t_u_u(g_982, 8))
        {
            for (g_759 = 0; (g_759 < 17); g_759++)
            {
                for (g_1352 = 0; (g_1352 <= 0); g_1352 += 1)
                {
                    if (g_2043)
                        goto lbl_3967;
                    for (g_506 = 0; (g_506 >= 0); g_506 -= 1)
                    {
                        if (g_1370[1])
                            break;
                    }
                    for (l_4044 = 0; l_4044 < 2; l_4044 += 1)
                    {
                        l_3204[l_4044] = 0x630AF406L;
                    }
                }
            }
        }
    }
        int16_t l_4164 = 0x2935L;
        int32_t l_4175 = 0xDAAB51D4L;
        int32_t l_4322 = 0x53B54A20L;
        uint32_t l_4358 = 1UL;
        int32_t l_4384 = 0xDD851F01L;
        uint16_t l_4453 = 0UL;
                    for (g_275 = 0; (g_275 < (-21)); g_275 = safe_sub_func_int16_t_s_s(g_275, 4))
        {
            uint32_t l_4359 = 0x6CE1B8FCL;
            int32_t l_4360[7][6] = {{0x4D52E69AL,(-3L),(-3L),0x4D52E69AL,(-2L),0x4D52E69AL},{0x4D52E69AL,(-2L),0x4D52E69AL,(-3L),(-3L),0x4D52E69AL},{0x9A51126EL,0x9A51126EL,(-3L),(-1L),(-3L),0x9A51126EL},{(-3L),(-2L),(-1L),(-1L),(-2L),(-3L)},{0x9A51126EL,(-3L),(-1L),(-3L),0x9A51126EL,0x9A51126EL},{0x4D52E69AL,(-3L),(-3L),0x4D52E69AL,(-2L),0x4D52E69AL},{0x4D52E69AL,(-2L),0x4D52E69AL,(-3L),(-3L),0x4D52E69AL}};
            int8_t l_4432 = 0x9DL;
            int32_t l_4439 = 0x46340F21L;
            int32_t l_4440 = 0x308E2A13L;
            int i, j;
if (l_3887)
                        {
if (g_3486) printf("index = [%d]\n", l_4272);
                    goto lbl_3517;}
g_1368 += 1;
                    if (l_3209) printf("index = [%d]\n", p_44);
                    for (g_3600 = 0; (g_3600 > 8); g_3600++)
            {
                uint8_t l_4337 = 255UL;
                int32_t l_4361 = 0xD7E3B922L;
                if ((0UL & l_4175))
                {
                    uint8_t l_4366 = 1UL;
                    int32_t l_4383 = (-1L);
{
lbl_3126:
            l_3209 = (BfBfBfg_184 < ((safe_rshift_func_int16_t_s_u((-7L), 12)) ^ l_4453));
            return BfBfBfg_184;
        }
                    if (((((g_897 = ((l_4361 = (safe_div_func_uint32_t_u_u((safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((((safe_sub_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s(g_1798[5][2], l_4337)) , ((1L & (((l_3230[0] = p_44) != (((l_4360[1][1] = ((l_4175 <= (safe_div_func_uint32_t_u_u((safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s((((((safe_sub_func_int8_t_s_s(((65534UL <= (g_34[0] , (safe_rshift_func_uint8_t_u_u(((((p_44 && (((((safe_add_func_int16_t_s_s((l_4358 = p_44), 7L)) < p_44) , 4L) < p_44) , 9L)) & (-8L)) && p_44) , l_3277), 7)))) <= p_44), p_44)) && p_44) != g_1684[0]) == 0xB4L) != l_4337), 1)), 13)), l_4359)), l_4164)), p_44)), l_4359)), 4294967295UL))) & 0x5B367826L)) <= p_44) & 0x0C8BL)) , p_44)) || 252UL)), 0x0CL)) | (-4L)) > l_4359), 0)), p_44)), g_1138))) != 0xF21C8443L)) && l_4360[1][1]) & 0x3215L) == l_3209))
                    {
                        int32_t l_4367[9] = {9L,3L,9L,9L,3L,9L,9L,3L,9L};
                        int i;
                        g_3935[2][3] = (g_240 , (((p_44 , p_44) > (l_4322 = g_2853[1][5][6])) > (l_4367[5] = ((p_44 , (safe_lshift_func_uint16_t_u_s((g_172 = (safe_add_func_uint16_t_u_u(g_3600, l_4366))), 5))) != 0x3B41L))));
                        return p_44;
                    }
                    else
                    {
                        l_4384 = (l_4383 = (safe_lshift_func_int16_t_s_s((g_982 ^ (~(((safe_div_func_uint8_t_u_u((g_1370[2] , (p_44 != ((l_4175 = (safe_div_func_int16_t_s_s((l_4322 = 1L), g_2853[0][1][0]))) == l_3803[0][2]))), (safe_rshift_func_uint8_t_u_s(((-4L) | ((((safe_rshift_func_int8_t_s_s((g_3172 = ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((((l_3464 = g_34[0]) <= p_44) ^ g_1368) & p_44), 0)), 2)) <= l_4337)), 0)) | p_44) == p_44) <= 249UL)), g_1138)))) || g_496[1]) <= p_44))), 11)));
                    }
                }
                else
                {
                    int32_t l_4403[6][3][4] = {{{0xE02745A9L,0xE02745A9L,0xE02745A9L,0xE02745A9L},{0xE02745A9L,0xE02745A9L,0xE02745A9L,0xE02745A9L},{0xE02745A9L,0xE02745A9L,0xE02745A9L,0xE02745A9L}},{{0xE02745A9L,0xE02745A9L,0xE02745A9L,0xE02745A9L},{0xE02745A9L,0xE02745A9L,0xE02745A9L,0xE02745A9L},{0xE02745A9L,0xE02745A9L,0xE02745A9L,0xE02745A9L}},{{0xE02745A9L,0xE02745A9L,0xE02745A9L,0xE02745A9L},{0xE02745A9L,0xE02745A9L,0xE02745A9L,0xE02745A9L},{0xE02745A9L,0xE02745A9L,0xE02745A9L,0xE02745A9L}},{{0xE02745A9L,0xE02745A9L,0xE02745A9L,0xE02745A9L},{0xE02745A9L,0xE02745A9L,0xE02745A9L,0xE02745A9L},{0xE02745A9L,0xE02745A9L,0xE02745A9L,0xE02745A9L}},{{0xE02745A9L,0xE02745A9L,0xE02745A9L,0xE02745A9L},{0xE02745A9L,0xE02745A9L,0xE02745A9L,0xE02745A9L},{0xE02745A9L,0xE02745A9L,0xE02745A9L,0xE02745A9L}},{{0xE02745A9L,0xE02745A9L,0xE02745A9L,0xE02745A9L},{0xE02745A9L,0xE02745A9L,0xE02745A9L,0xE02745A9L},{0xE02745A9L,0xE02745A9L,0xE02745A9L,0xE02745A9L}}};
                    int i, j, k;
                    l_3230[0] = (safe_add_func_uint32_t_u_u(((~(safe_mod_func_int32_t_s_s((p_44 == (g_1138 , (safe_lshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((p_44 || (safe_mod_func_int16_t_s_s(p_44, 0x8EFEL))), (safe_lshift_func_int16_t_s_u(0xD408L, 14)))), ((g_98[1][3] = 0xDC2BL) != g_1684[0]))))), (l_3277 = ((safe_mod_func_int16_t_s_s(((((safe_lshift_func_uint8_t_u_u((l_4361 = ((!l_4359) >= 0UL)), g_2467)) == 0xF0L) > l_4403[2][2][1]) > p_44), 0x8D57L)) ^ l_3803[0][2]))))) <= l_3794), l_4359));
                    return l_4360[4][1];
                }
if (g_2440) printf("index = [%d][%d]\n", l_4384, g_204);
if (g_6428)
                            break;
                    g_3935[5][3] = (+((0xE0F6L >= ((l_4361 = (((safe_lshift_func_int8_t_s_u((0x56L == (((p_44 & p_44) , 0x7D5CL) < g_506)), 1)) <= (0xEEF94759L < l_4384)) && p_44)) | l_3278)) || l_4359));
if (l_4440)
                        break;
                    l_4337 += 1;
                    ;
            }
{
        transparent_crc(g_4423[g_573], "g_4423[g_573]", l_4322);
        ;
    }
;
                    g_2853[0][6][6] = (((safe_sub_func_uint8_t_u_u(((((((g_2422 = ((l_4360[1][1] = ((((safe_add_func_uint16_t_u_u((0xD0CFL <= p_44), 4L)) && (((safe_mod_func_int8_t_s_s((g_154 = ((((g_472 = ((l_4432 = l_4360[3][5]) || g_3109[0])) & g_469) == ((l_4273 = ((safe_mod_func_int16_t_s_s((l_4439 = (((g_3193 = ((safe_mod_func_int32_t_s_s(((g_87 = 3UL) != (p_44 & (safe_div_func_int16_t_s_s((6UL >= l_3212[4]), p_44)))), l_3277)) == g_3317)) | l_4360[5][2]) <= 4294967290UL)), p_44)) != p_44)) >= 1L)) <= l_4360[5][5])), p_44)) , 249UL) > p_44)) , (-1L)) <= 0x1470L)) || g_496[3])) , g_1370[2]) & g_1370[2]) != l_3464) , g_3172) , 0UL), g_98[1][3])) > l_4440) && g_204);
            for (l_3794 = 0; (l_3794 <= 3); l_3794 += 1)
            {
                int32_t l_4458 = (-1L);
                const int16_t l_4505 = 0L;
                int i, j;
l_4453 += 1;
                    ;
                    if (((safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s(((g_2580[l_3794][l_3794] = (!0x9726E743L)) <= (0x9AEAD830L >= (!(safe_rshift_func_uint8_t_u_u((safe_div_func_int32_t_s_s(((l_4384 >= ((p_44 < p_44) <= ((l_4322 = ((g_2853[0][6][6] & (((g_4423[1] <= ((l_4175 = (safe_lshift_func_int8_t_s_s(l_4453, ((safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(0UL, 0x547154BBL)), 1L)) ^ 0x10L)))) , 1UL)) != l_3278) , p_44)) < l_4458)) > 0xBB173593L))) > 0x29B6L), 8L)), 4))))), l_4458)), l_4360[4][3])) < p_44))
                {
                    const uint32_t l_4477 = 0xFB4474FFL;
for (l_4458 = 0; l_4458 < 2; l_4458++)
            ;;
                    for (l_4358 = 0; (l_4358 < 5); l_4358 = safe_add_func_int16_t_s_s(l_4358, 1))
                    {
{
        for (l_4175 = 0; l_4175 < 10; l_4175++)
        {
            transparent_crc(g_2580[l_4272][l_4175], "g_2580[l_4272][l_4175]", l_4322);
            if (l_4322) {
if (BJBJBog_335)
                            break;
                    printf("index = [%d][%d]\n", l_4272, l_4175);}
        }
    }
                    l_4458 = 0L;
                    }
g_3486 -= 1;
if (g_2043) printf("index = [%d][%d][%d]\n", p_44, l_3277, i);
                    for (g_5512 = 6; (g_5512 >= 0); g_5512 -= 1)
                {
                    int i;
;
                    return g_4423[g_5512];
                }
for (l_4044 = 6; (l_4044 > 5); --l_4044)
                    {
                        uint32_t l_666 = 4294967292UL;
                        int32_t l_677 = 0xC2919148L;
                        g_3486 = (BJBJBog_335 == (safe_lshift_func_int16_t_s_u((l_666 >= 0xCA1FA15DL), 10)));
                        BfBfBcg_573 = (BfBfBcg_573 = (~(!(BJBJBog_335 <= (((0xBD3024CCL || (0x0624L == g_3193)) <= 0UL) > (g_1369 == (safe_add_func_int16_t_s_s(((g_2440 = (((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((l_677 = 1UL), ((safe_div_func_uint8_t_u_u((g_3193 < (l_666 || g_3193)), 0x7AL)) > g_3193))), 0xCE57L)) & 0xC6L) && 1L)) >= g_3193), l_4175))))))));
                    };
                    l_4232 += 1;
                    ;
                    g_2580[l_3794][l_3794] = (g_4423[1] , (((p_44 < l_4439) <= g_1684[0]) || (safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s((((1UL | (((((safe_lshift_func_uint16_t_u_s(0xAA14L, 2)) == (g_35 ^ (safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s((p_44 == (l_4476 = ((safe_div_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(g_4475, g_335)), p_44)) != p_44))), 0x6FFD75EDL)), p_44)))) <= p_44) , 0x7C5F6ACEL) , 0x9B9B816CL)) > 0x34L) | g_759), l_4477)), g_2043))));
                    if (g_3600)
                        {
if (l_4090)
                        goto lbl_3517;
if (l_4458) printf("index = [%d][%d]\n", g_3486, l_4439);
                    goto lbl_4478;}
                }
                else
                {
                    uint16_t l_4481 = 0x0B37L;
                    int32_t l_4490 = 0x5D6B754AL;
for (l_4439 = 0; l_4439 < 7; l_4439++)
    {
{
                        return g_1370[2];
                    }
                    ;
        if (g_3486) printf("index = [%d]\n", l_4439);
    }
if (g_1370[2])
                            continue;
                    ;
g_982 += 1;
                    l_4490 = (l_4360[3][0] = ((((safe_rshift_func_uint8_t_u_s(l_4481, 1)) == (l_3277 = (g_759 = (g_2580[l_3794][l_3794] , (safe_rshift_func_uint16_t_u_u(l_3230[0], 13)))))) ^ (g_2580[l_3794][l_3794] , p_44)) != ((~(l_4489[4][0] = (0x9BE7L >= (l_3464 = ((p_44 <= (safe_div_func_int16_t_s_s(((l_4322 = (((safe_sub_func_uint16_t_u_u((l_4458 = (p_44 >= (g_3935[4][1] < 5UL))), g_2440)) <= g_1138) , (-9L))) , 0xBC74L), g_1345))) != 0UL))))) , 0x1BL)));
                    g_204 = ((p_44 , l_4489[4][0]) > (safe_rshift_func_int8_t_s_u((g_2467 = ((safe_mod_func_int32_t_s_s(((g_154 = (g_2580[l_3794][l_3794] = p_44)) | (l_4458 = ((l_4439 = (safe_div_func_int16_t_s_s(0x0BC8L, 0x90FAL))) > (l_3230[0] = (((((safe_div_func_uint16_t_u_u((g_172 = g_1368), (safe_add_func_int16_t_s_s(p_44, g_2440)))) || (safe_rshift_func_int8_t_s_u(((g_1370[2] = (safe_lshift_func_uint8_t_u_u(1UL, p_44))) && l_4358), 4))) ^ l_4505) >= p_44) ^ l_4440))))), p_44)) | g_4423[1])), p_44)));
                    return l_4384;
                }
                l_4273 = 0xCD96DF4EL;
{
                for (g_1352 = 0; (g_1352 <= 0); g_1352 += 1)
                {
                    ;
if (g_204) printf("index = [%d]\n", g_506);
                    for (g_5512 = 0; g_5512 < 2; g_5512 += 1)
                    {
                        ;
                    }
                }
            }
                    l_3230[0] = ((safe_sub_func_int16_t_s_s((((safe_div_func_uint8_t_u_u(p_44, (g_4423[1] = ((safe_div_func_int8_t_s_s(((((((0x37CA17FCL >= (((safe_sub_func_uint32_t_u_u(((g_3600 | (safe_add_func_int8_t_s_s(0x4DL, 7L))) , (safe_mod_func_uint16_t_u_u(p_44, p_44))), (g_240 < ((safe_mod_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(l_3209, l_4505)), 7)) ^ l_4453) >= l_4360[4][3]), 1L)) > 0xEDL)))) ^ l_4489[4][0]) , l_4440)) & g_68) , p_44) , l_4044) < 1L) ^ g_2580[l_3794][l_3794]), g_3935[4][2])) | l_4489[4][0])))) && p_44) ^ g_3193), g_2580[0][7])) | p_44);
            }
        }
}
static uint16_t func_51(uint32_t p_52)
{
    uint16_t l_69 = 0xAAF0L;
    int32_t l_75 = 0xF781BE2FL;
    int32_t l_1706 = 0xAADEC7F0L;
    uint16_t l_1721 = 0xA004L;
    const uint8_t l_1724[5] = {255UL,255UL,255UL,255UL,255UL};
    int32_t l_1734[5];
    int8_t l_1774 = (-1L);
    uint32_t l_1826 = 1UL;
    int32_t l_1865[2];
    uint32_t l_1867 = 18446744073709551615UL;
    uint32_t l_2002 = 4UL;
    int16_t l_2072 = 0x44B4L;
    uint32_t l_2098 = 0xDF982D3FL;
    int8_t l_2161 = 0x81L;
    uint32_t l_2274[10] = {0x9192CB57L,0xD6D698ECL,0xCD3A9739L,0xCD3A9739L,0xD6D698ECL,0x9192CB57L,0xD6D698ECL,0xCD3A9739L,0xCD3A9739L,0xD6D698ECL};
    int8_t l_2354 = 9L;
    uint32_t l_2421 = 0x9719CA75L;
    const uint16_t l_2424[6][8] = {{4UL,7UL,1UL,0xE2FBL,0UL,9UL,1UL,1UL},{1UL,4UL,0xE606L,0xE606L,4UL,1UL,1UL,0xB883L},{65535UL,0xE606L,1UL,9UL,0xE2FBL,0x7909L,0xE2FBL,9UL},{0xE2FBL,0x7909L,0xE2FBL,9UL,1UL,0xE606L,65535UL,0xB883L},{1UL,1UL,4UL,0xE606L,0xE606L,4UL,1UL,1UL},{1UL,9UL,0UL,0xE2FBL,1UL,7UL,4UL,7UL}};
    int32_t l_2508 = 0x35A8E68AL;
    int8_t l_2712 = 0x75L;
    int32_t l_2829 = 2L;
    uint16_t l_2938 = 0x1C58L;
    const uint32_t l_2982 = 9UL;
    int32_t l_3032[7][5][6] = {{{0xE55F61C5L,0xB23A6AAAL,1L,0x6AF6BDAEL,0x6AF6BDAEL,1L},{(-1L),(-1L),0x6AF6BDAEL,0x26F778ECL,0x7335240EL,2L},{0xA18490A0L,1L,0x8A9BC732L,0x01CCCF67L,0xA6D9D65AL,0x6AF6BDAEL},{0L,0xA18490A0L,0x8A9BC732L,9L,(-1L),2L},{0xAACD44BBL,9L,0x6AF6BDAEL,(-2L),8L,1L}},{{(-2L),8L,1L,(-4L),1L,(-2L)},{(-9L),0L,(-10L),0x26F778ECL,(-10L),0L},{(-10L),0xB23A6AAAL,0x01CCCF67L,(-1L),0xA6D9D65AL,(-4L)},{(-1L),(-10L),(-1L),1L,1L,2L},{0x94BF3CACL,(-10L),0xA18490A0L,1L,(-1L),0x88FD6B90L}},{{0x8A9BC732L,2L,0x26F778ECL,0x94BF3CACL,0xA056D32FL,0x01CCCF67L},{(-4L),0xA18490A0L,0xE55F61C5L,0xB23A6AAAL,1L,0x6AF6BDAEL},{0x94BF3CACL,0xC7697946L,0xA6D9D65AL,0xA6D9D65AL,0xC7697946L,0x94BF3CACL},{1L,0x94BF3CACL,(-1L),1L,0x7335240EL,0xA18490A0L},{0x0E2F3977L,0xAACD44BBL,1L,0x88FD6B90L,(-1L),(-1L)}},{{0x0E2F3977L,1L,0x88FD6B90L,1L,(-2L),0x01CCCF67L},{1L,0x7335240EL,0xAACD44BBL,0xA6D9D65AL,0xE55F61C5L,(-10L)},{0x94BF3CACL,2L,8L,0xB23A6AAAL,1L,1L},{(-4L),0x94BF3CACL,1L,0x94BF3CACL,(-4L),0x6AF6BDAEL},{0x8A9BC732L,1L,1L,(-1L),0xC7697946L,0x8A9BC732L}},{{0x26F778ECL,(-9L),0x0E2F3977L,1L,0xA056D32FL,0x8A9BC732L},{0x7335240EL,1L,1L,1L,0xE55F61C5L,0x6AF6BDAEL},{0xA056D32FL,1L,1L,0L,0L,1L},{1L,0xA056D32FL,8L,1L,(-10L),(-10L)},{0x8A9BC732L,0xAACD44BBL,0xAACD44BBL,0x8A9BC732L,1L,0x01CCCF67L}},{{0x01CCCF67L,(-9L),0x88FD6B90L,0x94BF3CACL,1L,(-1L)},{0xA18490A0L,(-4L),1L,0xA6D9D65AL,1L,0xA18490A0L},{0xAACD44BBL,(-9L),(-1L),0L,1L,0x94BF3CACL},{0x7335240EL,0xAACD44BBL,0xA6D9D65AL,0xE55F61C5L,(-10L),0x6AF6BDAEL},{0x0E2F3977L,0xA056D32FL,0xE55F61C5L,0x01CCCF67L,0L,0x01CCCF67L}},{{0x26F778ECL,1L,0x26F778ECL,1L,0xE55F61C5L,0x88FD6B90L},{0xA18490A0L,1L,0xAACD44BBL,0xB23A6AAAL,0xA056D32FL,(-4L)},{1L,(-9L),1L,0xB23A6AAAL,0xC7697946L,1L},{0xA18490A0L,1L,0xA6D9D65AL,1L,(-4L),0xA18490A0L},{0x26F778ECL,0x94BF3CACL,0xA056D32FL,0x01CCCF67L,1L,0x8A9BC732L}}};
    int16_t l_3036[5];
    int32_t l_3067 = 0xB03A3733L;
    uint16_t l_3110 = 65527UL;
    int8_t l_3153 = (-7L);
    int i, j, k;
                    for (i = 0; i < 5; i++)
        { uint32_t BlClCHg_1138 = (~(((~((g_2467 && l_2938))) + (((g_1288 & (~(l_2072))) + (~(g_1369))) * (~((((l_2002 & g_1138) ^ (-(g_275))) * ((~(l_2712)) * (~(l_3110))))))))));
uint32_t BlClCIl_2002 = (-((((-((~(((-((g_1288 | g_1138))) | ((g_2467 & (~((~(l_3110))))) * (l_2938 | (l_2002 & g_275)))))))) & (-((~(g_1369))))) | ((BlClCHg_1138 | l_2712) ^ l_2072))));
int16_t BlClCJl_2072 = (~(((-((l_2938 && (l_3110 >> l_2002)))) | (((~((g_1288 * g_1138))) ^ (((~(BlClCHg_1138)) ^ (~((-(g_2467))))) | l_2712)) + (((~(g_1369)) + (~(BlClCIl_2002))) | (g_275 && l_2072))))));
uint16_t BlClCKl_2938 = (~(((~((~((g_2467 * (-(BlClCJl_2072))))))) & (-(((BlClCHg_1138 * ((l_2002 * (g_275 ^ l_2712)) + (g_1288 & (g_1138 & BlClCIl_2002)))) | (((~((~((~((~((-(l_2938)))))))))) ^ (-((~(l_3110))))) & (-(((-(g_1369)) ^ l_2072))))))))));
int8_t BlClCLg_2467 = (~(((~(((~(l_2938)) + (~((~(BlClCIl_2002))))))) && (((~((BlClCHg_1138 >> BlClCJl_2072))) + (~(g_275))) * (((~((BlClCKl_2938 | (l_2072 ^ g_1369)))) & (((g_2467 ^ l_3110) | l_2002) ^ l_2712)) * (g_1288 | g_1138))))));
int32_t BlClCMg_275 = (~((((-((~((~(((g_1369 & l_3110) ^ (~((~(BlClCJl_2072))))))))))) | (~(((-((g_2467 + (~(((~(g_1288)) + (BlClCIl_2002 * (BlClCLg_2467 ^ BlClCKl_2938)))))))) && ((-((~(l_2002)))) * (l_2938 & l_2712)))))) ^ (((g_1138 & g_275) ^ l_2072) * (~((-((~(BlClCHg_1138))))))))));
if((((g_1138 > l_2938) || (g_275 > l_2072)) || ((g_1138>=0U) || (BlClCJl_2072 > BlClCKl_2938)))){
                                    while ((g_35 > g_506) )
{
for (g_2440 = 0; g_2440 < 4; g_2440++)
    {
        for (l_1706 = 0; l_1706 < 9; l_1706++)
        {
            for (g_2440 = 0; g_2440 < 7; g_2440++)
            {
                transparent_crc(g_2853[g_2440][l_1706][g_2440], "g_2853[g_2440][l_1706][g_2440]", g_204);
                if (g_204) printf("index = [%d][%d][%d]\n", g_2440, l_1706, g_2440);
            }
        }
    };
}
                    BlClCHg_1138 = g_1138;
BlClCIl_2002 = l_2002;
BlClCJl_2072 = l_2072;
BlClCKl_2938 = l_2938;
BlClCLg_2467 = g_2467;
BlClCMg_275 = g_275;
g_1138 = (~((((~(((-(l_2072)) + l_2002))) & ((~((-((~(g_2467)))))) && (l_2712 * ((-(g_1369)) ^ BlClCIl_2002)))) * (~((~((~(((((BlClCKl_2938 + (~(BlClCLg_2467))) + g_275) * (~((-((BlClCHg_1138 & (~(((g_1288 + BlClCMg_275) && g_1138))))))))) | (-(((~((-((BlClCJl_2072 ^ l_3110))))) && l_2938)))))))))))));
l_2002 = (~(((((~((~(((BlClCJl_2072 & BlClCLg_2467) && (~(((~((~(g_1288)))) >> (~(g_275)))))))))) | (((~((-(BlClCKl_2938)))) + ((BlClCIl_2002 | l_2712) << g_2467)) | g_1369)) * (l_2002 | (~(BlClCMg_275)))) | ((-((-((~(l_2072)))))) ^ (~((-(((BlClCHg_1138 ^ (l_3110 & g_1138)) + l_2938)))))))));
l_2072 = (~(((~(((~(((-((g_1288 & g_275))) * ((-(l_2002)) | (l_3110 & l_2072))))) >> (~((~(((~(BlClCJl_2072)) && (BlClCIl_2002 && BlClCKl_2938))))))))) && (((-(BlClCLg_2467)) & (l_2712 && (g_2467 + g_1369))) ^ (~(((~((-((l_2938 * (~((~((g_1138 << (-(BlClCMg_275)))))))))))) & (-(BlClCHg_1138)))))))));
l_2938 = (~((((l_2938 | (~((~(BlClCJl_2072))))) + (~(BlClCIl_2002))) * (~(((l_2002 + (((-(l_2072)) ^ BlClCKl_2938) + g_1369)) ^ (BlClCLg_2467 && (((-(g_2467)) * ((~((~((~(l_3110)))))) * (~((BlClCHg_1138 << (BlClCMg_275 && g_275)))))) ^ ((g_1138 ^ l_2712) & (~(g_1288)))))))))));
g_2467 = (~(((-(((((BlClCHg_1138 ^ l_2712) >> BlClCLg_2467) | g_1138) + ((~((~((((~((-(l_2002)))) + (~((g_1288 && BlClCKl_2938)))) & (BlClCIl_2002 ^ g_275)))))) ^ g_2467)))) ^ (~((((~(BlClCMg_275)) ^ g_1369) | (~(((-(l_3110)) && (l_2938 && (BlClCJl_2072 | (-(l_2072)))))))))))));
g_275 = (~(((((g_1288 | (~(((~((-(g_275)))) & (g_1369 >> (((l_2072 | g_1138) | l_2712) ^ (~(BlClCLg_2467)))))))) && (~(((BlClCJl_2072 * BlClCMg_275) && l_2938)))) | (~(BlClCKl_2938))) | ((-(((~(BlClCHg_1138)) && ((~(g_2467)) * (BlClCIl_2002 * l_3110))))) & (-((~((-(l_2002))))))))));
if((!((BlClCIl_2002 > BlClCHg_1138)) || !(g_1138))){
printf("g_1138=%llu\n", (unsigned long long)g_1138);
l_2072 = (~(((-((-((~((~((-((g_1138 >> g_1369))))))))))) << (((~(l_2938)) & (~((-((g_2467 * ((l_2072 * (-(l_2712))) ^ (-(BlClCHg_1138))))))))) ^ (~((((~((((l_2002 & g_1288) & BlClCJl_2072) | BlClCLg_2467))) + g_275) >> (((-(BlClCIl_2002)) && (l_3110 << BlClCMg_275)) && BlClCKl_2938))))))));
}
if((!BlClCJl_2072)){
{
                        return g_2043;
                    }
                    printf("l_2002=%llu\n", (unsigned long long)l_2002);
g_1138 = (-(((-(((-((((~((((-(g_1288)) | ((~((~((~(g_1369)))))) ^ (BlClCIl_2002 ^ l_2072))) & BlClCLg_2467))) | (BlClCMg_275 << BlClCKl_2938)) ^ (l_2938 | (~(l_3110)))))) * ((((~(l_2712)) >> ((-(g_2467)) * (g_275 | (-(BlClCJl_2072))))) >> (~(BlClCHg_1138))) * (~((-((~(g_1138)))))))))) << (~((~((~((~((~(l_2002)))))))))))));
continue;
}
if(!((g_1288 > g_2467))){
printf("l_2072=%lld\n", (long long)l_2072);
break;
}
if((!l_2002)){
printf("l_2938=%llu\n", (unsigned long long)l_2938);
goto lbl_2983;
}
if((((l_2712<=117) && (!BlClCLg_2467)) || !((l_2938 < l_3110)))){
printf("g_2467=%lld\n", (long long)g_2467);
break;
}
}
                                    while ((!g_2467) )
{
{
                    l_2508 = l_1724[4];
                    for (g_2852 = 0; (g_2852 <= 0); g_2852 += 1)
                    {
                        int i;
                        return g_1684[g_2852];
                    }
                }
}
                    g_1138 = BlClCHg_1138;
l_2002 = BlClCIl_2002;
l_2072 = BlClCJl_2072;
l_2938 = BlClCKl_2938;
g_2467 = BlClCLg_2467;
g_275 = BlClCMg_275;
                    l_1734[i] = 0x78FC6168L;}
    for (i = 0; i < 2; i++)
        l_1865[i] = (-3L);
    {
        int16_t l_1683[8] = {0L,0L,1L,0L,0L,1L,0L,0L};
        int32_t l_1722 = 0xB739A435L;
        uint8_t l_1735 = 0x71L;
        uint8_t l_1775 = 0UL;
        uint16_t l_1840 = 0xCFCBL;
        int16_t l_1874[9][5] = {{0L,0L,0L,0L,0L},{0x25AAL,0x25AAL,0x25AAL,0x25AAL,0x25AAL},{0L,0L,0L,0L,0L},{0x25AAL,0x25AAL,0x25AAL,0x25AAL,0x25AAL},{0L,0L,0L,0L,0L},{0x25AAL,0x25AAL,0x25AAL,0x25AAL,0x25AAL},{0L,0L,0L,0L,0L},{0x25AAL,0x25AAL,0x25AAL,0x25AAL,0x25AAL},{0L,0L,0L,0L,0L}};
        uint8_t l_1890 = 0UL;
        int8_t l_1921 = 0x65L;
        int i, j;
        l_1706 = (+((func_54(func_60(((g_76 = (safe_add_func_int32_t_s_s((l_75 = ((((safe_div_func_uint16_t_u_u((g_35 , g_9), g_35)) , g_34[0]) >= ((l_69 = (safe_rshift_func_int16_t_s_u((g_68 = (-7L)), 1))) >= (safe_sub_func_uint8_t_u_u((((g_9 >= (0x0BA8L | p_52)) >= (safe_unary_minus_func_uint32_t_u(((safe_rshift_func_int16_t_s_u((g_9 != (-1L)), 15)) , 5UL)))) >= 0x10L), 2L)))) == l_75)), 0x19C81B93L))) != g_34[0])), l_1683[5], l_1683[5], g_34[0], g_1684[0]) > p_52) >= 0xBFD5A1B5L));
        for (g_759 = 0; (g_759 != 13); ++g_759)
        {
            int8_t l_1723[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
            int32_t l_1740 = (-3L);
            int32_t l_1797 = 0xAC81288AL;
            int32_t l_1864[8];
            int i;
            for (i = 0; i < 8; i++)
                l_1864[i] = (-8L);
            if (((p_52 != g_34[0]) != (0xB2F40E9DL > (((g_154 = ((safe_mod_func_uint16_t_u_u((((((safe_add_func_int8_t_s_s((((safe_mod_func_uint8_t_u_u((((safe_mod_func_int16_t_s_s((p_52 ^ (((safe_div_func_int8_t_s_s(g_573, p_52)) != (((l_1722 = ((l_1721 >= ((0x5E5AL == ((p_52 <= p_52) || p_52)) > g_76)) && g_204)) || 0xCAL) && l_69)) ^ 0x2BL)), g_469)) , g_9) , l_1683[5]), 0xB6L)) && g_1368) && l_1723[0]), l_1683[5])) == p_52) >= (-7L)) < l_1723[3]) && g_1370[1]), l_1724[4])) == l_1723[3])) <= 7L) > g_496[2]))))
            {
                int8_t l_1729 = 6L;
                int32_t l_1748 = (-8L);
                int32_t l_1756 = 0x6BA0C233L;
                uint16_t l_1796 = 0UL;
                uint32_t l_1863 = 2UL;
                for (g_1345 = 0; (g_1345 < 22); ++g_1345)
                {
                    for (g_1138 = 4; (g_1138 != 60); ++g_1138)
                    {
                        l_1729 = (p_52 == p_52);
                        return l_1724[4];
                    }
                    for (l_1729 = 1; (l_1729 <= 7); l_1729 += 1)
                    {
                        int i;
                        g_204 = (255UL >= l_1683[l_1729]);
                    }
                }
                for (g_469 = 0; (g_469 > 16); g_469 = safe_add_func_int16_t_s_s(g_469, 2))
                {
                    int16_t l_1755[8][9] = {{(-1L),(-1L),1L,1L,(-1L),(-1L),1L,1L,(-1L)},{2L,9L,2L,9L,2L,9L,2L,9L,2L},{(-1L),1L,1L,(-1L),(-1L),1L,1L,(-1L),(-1L)},{0x1923L,9L,0x1923L,9L,0x1923L,9L,0x1923L,9L,0x1923L},{(-1L),(-1L),1L,1L,(-1L),(-1L),1L,1L,(-1L)},{2L,9L,2L,9L,2L,9L,2L,9L,2L},{(-1L),1L,1L,(-1L),(-1L),1L,1L,(-1L),(-1L)},{0x1923L,9L,0x1923L,9L,0x1923L,9L,0x1923L,9L,0x1923L}};
                    int32_t l_1776 = 5L;
                    int i, j;
                    if ((l_1740 = (safe_rshift_func_int16_t_s_s(((((((l_1734[3] == g_68) ^ 0x9CD2L) | l_1735) && (l_1729 ^ p_52)) , (safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(g_897, p_52)), l_1723[1]))) < p_52), 7))))
                    {
                        return p_52;
                    }
                    else
                    {
                        int32_t l_1747 = 0xE484789FL;
                        l_1740 = 0x9158ADCEL;
                        l_1756 = (((g_1684[0] = (safe_lshift_func_int8_t_s_s(((safe_div_func_int16_t_s_s((((0L < ((l_1722 = (safe_lshift_func_uint8_t_u_s((l_1747 > (l_1748 = (g_1370[2] ^ l_1747))), p_52))) | (((safe_div_func_uint32_t_u_u(4294967295UL, ((((0UL | ((((g_1288 = (p_52 <= (safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((((l_1747 | g_1684[0]) , (-4L)) & l_1755[5][0]), 0x1D10L)), g_759)))) <= l_1729) < 0UL) || p_52)) && g_759) == p_52) , g_87))) || g_1684[0]) <= l_1706))) <= l_1747) <= p_52), p_52)) & g_98[1][3]), 5))) && g_68) < p_52);
                        g_1370[2] = (safe_mod_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((safe_add_func_int8_t_s_s(((l_1776 = (safe_sub_func_uint32_t_u_u((l_1722 = (l_1683[1] && ((safe_rshift_func_int8_t_s_s((((safe_lshift_func_int16_t_s_u((((((safe_unary_minus_func_uint16_t_u((l_1706 < l_1756))) != (1L < (((safe_rshift_func_int16_t_s_u((~((g_897 = (safe_unary_minus_func_uint32_t_u(3UL))) >= (l_1755[5][0] , g_1352))), 15)) ^ ((l_1774 && l_1740) == l_1775)) , l_1755[5][0]))) == g_1599) >= p_52) && 1UL), 11)) >= g_1352) != l_1748), l_1755[6][2])) , p_52))), (-1L)))) && p_52), g_68)), 0x21038046L)) < 0UL), p_52));
                    }
                }
                if ((safe_lshift_func_uint8_t_u_s((l_1722 = l_1724[2]), (l_1774 >= l_1735))))
                {
                    uint32_t l_1807 = 0xF6B5ED28L;
                    int32_t l_1818[4];
                    uint32_t l_1827 = 0x8A5D70FCL;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1818[i] = 6L;
                    l_1756 = (((g_982 | (safe_add_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s(((((safe_unary_minus_func_uint32_t_u(((safe_div_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(((p_52 || ((g_98[1][3] , (((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(g_897, 1)), (safe_mod_func_uint16_t_u_u((g_98[2][0] = 0xFB08L), ((l_1740 = (-1L)) || (4294967295UL > 0UL)))))) & ((((l_1797 = l_1796) | 0UL) , l_75) == 0x734F5120L)) , g_469)) == p_52)) | 0xE713L), g_1798[5][2])) ^ 2L), 3L)) <= l_1706))) , 0xADL) , p_52) >= 1L), 0xA3D3L)), l_1723[1])) | 0x652AL), 0x6B644A65L))) & g_35) != l_1796);
                    if ((((safe_mod_func_int8_t_s_s((-1L), l_1706)) == (safe_add_func_uint16_t_u_u((p_52 < g_1352), 0x5E09L))) != 0x3602L))
                    {
                        l_1797 = (((((0x12L < ((p_52 , p_52) > (g_1345 = (((safe_sub_func_uint16_t_u_u((((((g_154 = g_573) || l_1807) != ((safe_rshift_func_uint8_t_u_u((p_52 < (safe_sub_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u(l_1722, 0xE508973DL)) == ((safe_mod_func_int32_t_s_s(p_52, 0x7477AD3DL)) && 1L)), 0xB06F7772L))), 1)) , l_1748)) , 0xBED97184L) , g_1368), 7L)) > (-4L)) , 4294967295UL)))) & 0L) | g_472) <= l_1807) , 0xAF8DC3C4L);
                    }
                    else
                    {
                        uint32_t l_1819 = 0x9606BD0BL;
                        int32_t l_1866 = 0x00F4FFB0L;
                        l_1748 = (((safe_add_func_int8_t_s_s((l_1818[0] = l_1756), 255UL)) ^ ((((1L || ((g_1370[2] == 6L) >= (g_172 = (((l_1819 = g_1345) || (((safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(65530UL, (p_52 <= (safe_sub_func_int16_t_s_s(g_98[1][4], g_87))))), g_1345)) , g_68) != l_1819)) ^ l_1729)))) > l_1748) != l_1826) > 0x47EFL)) < g_34[0]);
                        l_1827 = g_1369;
                        g_204 = (safe_lshift_func_uint16_t_u_u((l_1722 = (safe_lshift_func_int16_t_s_u((1L | (safe_lshift_func_int16_t_s_u((((l_1796 >= ((p_52 >= ((l_1797 = (safe_lshift_func_uint16_t_u_u(l_1740, ((safe_lshift_func_uint16_t_u_s((g_275 , (safe_rshift_func_uint8_t_u_u(g_87, 5))), 0)) , l_1840)))) > (safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((((safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((((safe_div_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_add_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((l_1864[3] = (safe_add_func_int32_t_s_s((((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(0xC44DL, l_1863)), p_52)) < g_1370[2]) < g_982), 0xD148CE91L))), g_1288)) < 0x23L), p_52)), l_1863)), p_52)) , l_1827) < g_76), g_34[0])), 0UL)) < p_52) == l_1818[0]), p_52)), (-1L))))) || (-1L))) , l_75) < l_1865[0]), g_1798[2][7]))), l_1866))), g_1798[5][2]));
                        if (l_1740)
                            break;
                    }
                    g_1370[1] = 0xD59D4E86L;
                    if (l_1867)
                        continue;
                }
                else
                {
                    l_1722 = l_1724[4];
                    for (g_87 = 0; (g_87 <= 0); g_87 += 1)
                    {
                        int i;
                        return g_1684[g_87];
                    }
                }
            }
            else
            {
                uint32_t l_1888[3][2][4];
                int32_t l_1889 = 5L;
                int i, j, k;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 4; k++)
                            l_1888[i][j][k] = 0xD73C7FA9L;
                    }
                }
                g_1370[2] = p_52;
                l_75 = (safe_mod_func_uint8_t_u_u((safe_div_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(l_1874[7][2], g_506)), (safe_sub_func_uint32_t_u_u(((((-1L) >= ((((((safe_rshift_func_int16_t_s_u(g_335, 3)) >= (~(!((g_1370[0] = ((((l_1797 = g_1798[5][2]) | (safe_add_func_uint32_t_u_u((p_52 , (((g_87 < (!(l_1888[0][0][1] = (((safe_lshift_func_int16_t_s_s((((l_1864[2] = ((safe_add_func_uint32_t_u_u((0xBDE8109CL >= g_1370[0]), 0xA3248063L)) , 0x4AL)) || g_496[0]) <= l_1706), 3)) ^ l_1865[0]) || 0xF2L)))) > 0L) ^ l_1740)), g_98[3][1]))) , g_573) , (-1L))) <= l_1734[4])))) || g_1599) , g_472) ^ g_506) ^ p_52)) && 0xCC41L) != 1UL), 0UL)))), (-6L)));
                for (g_240 = 0; (g_240 <= 4); g_240 += 1)
                {
                    int i;
                    g_1370[1] = l_1734[g_240];
                    g_1370[2] = (((l_1889 = (p_52 && p_52)) < ((p_52 < (((((l_1890 , l_1734[g_240]) , (((safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((((l_1706 = ((safe_add_func_uint8_t_u_u((+(l_75 = (g_34[0] , (safe_unary_minus_func_int32_t_s(((((safe_sub_func_uint8_t_u_u(255UL, (248UL && (((safe_rshift_func_uint8_t_u_s(((((g_87 = (safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((g_87 >= 0x083EL), g_87)), p_52)) , p_52), 6L))) || 0xE4L) || 1L) && p_52), 6)) != g_172) == g_98[2][0])))) >= l_1867) < g_34[0]) ^ p_52)))))), g_1370[2])) | p_52)) > 0x1C69L) < 9UL), p_52)), p_52)) & p_52) , 0xD5L)) >= l_1683[7]) | 1UL) >= g_35)) != l_1888[0][0][1])) || g_1368);
                    for (g_184 = 0; (g_184 <= 0); g_184 += 1)
                    {
                        int32_t l_1918 = 0x53669838L;
                        int i;
                        l_1918 = (safe_sub_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((l_1865[g_184] , (g_1684[g_184] || ((p_52 , p_52) && (+(g_154 = (!(+(safe_add_func_int32_t_s_s(p_52, 0x6F544798L))))))))), 0x80479FE7L)), 0x483FL));
                    }
                }
            }
        }
        l_1706 = (((((safe_lshift_func_uint8_t_u_s(0x1BL, (((l_1722 = p_52) == ((l_1921 > (g_1370[1] = (g_352 & ((((0xA0L >= (safe_mod_func_uint32_t_u_u(((((((((safe_sub_func_int8_t_s_s((l_75 = ((0UL < l_1683[5]) , (l_1734[3] = g_506))), 251UL)) || l_1874[7][2]) != p_52) & 0x1AE204F1L) > g_472) , g_1352) >= g_469) != l_1683[5]), l_1867))) > l_1890) && 6UL) || 1UL)))) , l_1706)) , 0xCDL))) >= p_52) , 0x25ED2621L) && 4L) <= p_52);
    }
                    if ((((safe_sub_func_uint32_t_u_u((((l_2072 & ((l_1734[1] = g_759) > (safe_lshift_func_uint16_t_u_u(p_52, 9)))) == (safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((safe_div_func_int16_t_s_s(g_1369, 0x8309L)) || (safe_lshift_func_int16_t_s_u(p_52, p_52))), 15)), ((safe_div_func_uint8_t_u_u((((p_52 & (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(((g_1138 == g_1352) && g_1288), p_52)), 0UL))) , l_1865[1]) | l_1774), (-6L))) , g_1599)))) , p_52), p_52)) < 0xBF3DF452L) , p_52))
    {
        uint16_t l_2089 = 0UL;
        int32_t l_2099 = 0L;
        l_2089 = (4294967286UL < p_52);
        l_1734[3] = (safe_lshift_func_uint8_t_u_s((g_472 = 0x31L), (safe_rshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(p_52, (l_2099 = ((l_1734[4] && (safe_rshift_func_uint8_t_u_u(g_1369, 6))) ^ ((((((-3L) && 0x5E66456EL) == l_1724[4]) > l_2098) ^ l_2002) , l_1867))))), 14))));
    }
    else
    {
        uint8_t l_2100 = 0UL;
        int32_t l_2149 = 0x23A017E2L;
        int32_t l_2275[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        int32_t l_2786 = 0x0F6D7D0FL;
        uint32_t l_2855 = 4294967295UL;
                    if ((safe_unary_minus_func_uint8_t_u((g_472 = (1L != 0x910BL)))))
        {
lbl_3126:
            g_204 = (p_52 < ((safe_rshift_func_int16_t_s_u((-7L), 12)) ^ g_172));
            return p_52;
        }
        else
        {
            int8_t l_2827 = 1L;
            int32_t l_2828[3];
            uint32_t l_2958 = 0xB9F46481L;
            int16_t l_2965 = (-4L);
            int8_t l_3078 = 0x55L;
            int i;
            for (i = 0; i < 3; i++)
                ;
            if (((g_154 = ((g_76 = (g_759 = p_52)) > ((safe_rshift_func_int8_t_s_s((+(l_2828[0] = l_2827)), l_2829)) && p_52))) & (g_472 = (safe_rshift_func_uint16_t_u_s(((((p_52 , (safe_div_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(0xDFEE1244L, (((safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((p_52 , g_1599) || (l_2149 = g_506)), 2)), 9)) | l_2275[1]) , g_1345))) != g_982), (-1L)))) && p_52) < l_2827) < g_982), g_496[2])))))
            {
                uint8_t l_2840 = 1UL;
                int32_t l_2892[8][9][3] = {{{0x27B90348L,3L,3L},{(-5L),6L,0xD68CB28BL},{0L,0L,9L},{(-1L),0x07865337L,0x04DC1EA0L},{0x635C4A12L,0xB30514ADL,0x909BAC14L},{0xA7B685F7L,0x07865337L,(-9L)},{0x49EBD11CL,0L,0L},{0x1D722DA1L,6L,(-3L)},{0x3A21BC98L,3L,0x49EBD11CL}},{{6L,0xCB5A84E3L,1L},{0x97D491D9L,0xC41D3717L,(-6L)},{(-1L),(-1L),0xCB5A84E3L},{0x5354B708L,1L,0xC0A7F112L},{1L,2L,(-3L)},{0x69C13A41L,0x27B90348L,(-9L)},{(-9L),(-3L),2L},{0xF252C132L,0x635C4A12L,0xF252C132L},{(-7L),(-6L),0x5AFF5F82L}},{{0xE9112707L,0L,(-9L)},{(-1L),2L,2L},{(-1L),9L,0x635C4A12L},{(-1L),(-9L),0xFCD9A823L},{0xE9112707L,0L,(-1L)},{(-7L),0x992771E9L,(-1L)},{0xF252C132L,0L,0x7703ED07L},{(-9L),(-10L),0xA7B685F7L},{0x69C13A41L,0xBC4ACB74L,0xB30514ADL}},{{1L,0x2CB1F362L,(-1L)},{0x5354B708L,1L,(-3L)},{(-1L),(-5L),(-1L)},{0x97D491D9L,0x69C13A41L,0xA3B150ACL},{6L,(-4L),(-6L)},{0x3A21BC98L,0x3A21BC98L,(-8L)},{0x1D722DA1L,(-1L),(-1L)},{0x49EBD11CL,0x23FB1394L,0xBC4ACB74L},{0xA7B685F7L,0xFCD9A823L,9L}},{{0x635C4A12L,0x49EBD11CL,0xBC4ACB74L},{(-1L),0x5AFF5F82L,(-1L)},{0L,0xA70F41A9L,(-8L)},{(-5L),0x04DC1EA0L,(-6L)},{0x27B90348L,(-6L),0xA3B150ACL},{(-4L),0L,(-1L)},{0x3B4B2C3EL,0x909BAC14L,(-3L)},{0xD68CB28BL,(-1L),(-1L)},{(-1L),1L,0xB30514ADL}},{{9L,(-1L),0xA7B685F7L},{0xB30514ADL,0xC0A7F112L,0x7703ED07L},{0L,(-1L),(-1L)},{0xBC4ACB74L,0xF54EE735L,(-1L)},{(-4L),0xDCCB8EDCL,0xFCD9A823L},{0xC41D3717L,0x7E13CFB9L,0x635C4A12L},{0x04DC1EA0L,(-4L),2L},{(-1L),0x7E13CFB9L,(-9L)},{2L,0xDCCB8EDCL,0x5AFF5F82L}},{{0x439149D0L,0xF54EE735L,0xF252C132L},{0x992771E9L,(-1L),2L},{0xF54EE735L,0xC0A7F112L,(-9L)},{0xB6C4321AL,(-1L),(-3L)},{3L,1L,0xC0A7F112L},{3L,(-1L),0xCB5A84E3L},{(-9L),0x909BAC14L,(-6L)},{(-10L),(-1L),(-1L)},{0x69C13A41L,0xA3B150ACL,0x7E13CFB9L}},{{6L,(-5L),6L},{1L,7L,(-1L)},{1L,0xA7B685F7L,1L},{(-1L),0x7E13CFB9L,0xF252C132L},{0xC528E876L,0x992771E9L,(-5L)},{(-1L),0x69C13A41L,0x3A21BC98L},{1L,0L,0x750D8B23L},{1L,0x3B4B2C3EL,(-6L)},{6L,0xB6C4321AL,0xDCCB8EDCL}}};
                int32_t l_2893[7];
                int i, j, k;
                ;
{
                        int i;
                        g_2440 = (((!((0x00L <= (safe_sub_func_uint32_t_u_u((g_5210[0] = g_1684[k]), (safe_mod_func_int16_t_s_s((safe_add_func_uint8_t_u_u((g_1684[0] | (safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s(l_75, 4)), 4)), 4L)), 5))), (((safe_rshift_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((0x6FL >= l_75), (g_240 = ((safe_mod_func_uint32_t_u_u(((((safe_sub_func_int16_t_s_s((g_1684[k] ^ g_2580[0][7]), l_1826)) > l_75) ^ g_9) ^ 0xF73BL), l_1867)) , g_1599)))), 12)) , g_3935[3][2]) > l_75))), g_1599))))) , k)) == l_75) || g_573);
for (i = 0; i < 1; i++)
                        g_1684[i] = 0x5E55L;
                    return l_75;
                    }
                    for (l_2786 = 0; (l_2786 <= 7); l_2786 += 1)
                {
                    uint32_t l_2854 = 0UL;
                    int32_t l_2869[4] = {1L,1L,1L,1L};
                    int i;
                    for (l_2100 = 0; (l_2100 <= 7); l_2100 += 1)
                    {
                        uint8_t l_2850 = 0x3FL;
                        int i;
                        ;
                        ;
{
                        int16_t l_905 = 0L;
                        l_905 = (i = g_76);
                    }
                    if (g_87)
                            ;;
                    }
                    if (g_1684[0])
                        {
;
                    ;}
                    g_1370[1] = 0xAF1BC787L;
                }
g_3600 += 1;
                    l_2893[3] = (l_2828[0] = (l_1734[0] = ((safe_rshift_func_uint8_t_u_u((l_2149 = ((((safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_u(9UL, ((((((l_2840 , ((((safe_rshift_func_uint8_t_u_s(((((safe_rshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s(((0x88L & ((safe_div_func_uint16_t_u_u((l_2828[2] & (g_1138 , 2UL)), (safe_rshift_func_uint16_t_u_u(65535UL, 7)))) || ((safe_add_func_uint32_t_u_u(((0x0C3C3219L <= ((safe_mod_func_int32_t_s_s((((g_759 = (4294967295UL == 0x4518D099L)) ^ g_1138) | g_1352), l_1734[3])) | g_1352)) >= 0UL), g_573)) > l_2828[0]))) | g_1368), g_2043)), l_2827)) > l_2840) <= p_52) ^ 0xDE598703L), g_1369)) , 0x5BDAA71DL) , 0x55L) || p_52)) && 5UL) , 0x01L) != p_52) , p_52) || 1UL))) == 1UL), l_2100)) ^ l_2892[4][7][0]) && 0xDEL) > l_2840)), 0)) != p_52)));
            }
            else
            {
                int32_t l_2916[9][3] = {{1L,7L,0L},{(-1L),0L,(-7L)},{8L,0xD1F05BC4L,0x511543C1L},{0L,0L,0xD1F05BC4L},{(-1L),7L,0x3899019DL},{(-1L),(-1L),8L},{0L,(-7L),7L},{8L,(-1L),8L},{(-1L),0x70A87605L,0x3899019DL}};
                uint32_t l_3018 = 0xFFA35317L;
                int16_t l_3023 = (-1L);
                const int16_t l_3077 = (-1L);
                int32_t l_3083[3];
                uint32_t l_3098 = 0UL;
                int32_t l_3147[3][8];
                int i, j;
{
{
                        int32_t l_6761 = 0x97130E1AL;
                        uint32_t l_6767 = 0UL;
                        l_2786 = ((l_3098 = (~(safe_mod_func_int16_t_s_s((((((+((safe_div_func_int32_t_s_s(((((safe_lshift_func_int16_t_s_u(((((g_240 = (-1L)) & (l_6761 = (g_204 , (g_2422 & l_2421)))) < g_352) | 0x3AL), ((l_2829 = l_3083[0]) , (2UL >= (((safe_div_func_int16_t_s_s((((g_98[2][2] = (g_3317 = ((((g_2853[0][6][6] = (safe_div_func_uint32_t_u_u((l_2829 = g_2422), g_2422))) , g_275) ^ l_6767) ^ g_2422))) ^ 1UL) | k), 4L)) && 0x74CC71B1L) , 0x5542L))))) >= l_3083[2]) == 0x03L) & g_2422), l_75)) ^ 4294967291UL)) , 1UL) <= g_240) < g_1798[5][2]) > 0xFD327552L), g_2422)))) <= g_1599);
                    }
                    g_5210[0] = 1L;
                        g_573 = g_34[0];
                    }
g_87 += 1;
                    for (l_75 = 21; (l_75 != (-13)); l_75--)
                    {
                        int16_t l_5399[7] = {(-1L),0xDCE8L,(-1L),(-1L),0xDCE8L,(-1L),(-1L)};
                        int i;
                        l_2828[1] = (-5L);
                        ;
                    };
                    for (i = 0; i < 3; i++)
                    l_3083[i] = 0L;
{
                    return g_5844;
                }
                    for (i = 0; i < 3; i++)
                {
                    ;
                }
{
                transparent_crc(g_2853[l_2508][j][g_204], "g_2853[l_2508][j][g_204]", g_275);
                if (g_275) printf("index = [%d][%d][%d]\n", l_2508, j, g_204);
            }
                    g_2853[0][6][6] = (safe_add_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(((l_1706 = (-1L)) != 0x9B16L), ((((((((safe_add_func_int32_t_s_s(((safe_mod_func_int32_t_s_s(((l_2149 = (l_2275[4] = (safe_sub_func_uint32_t_u_u((~((l_2828[0] = g_1370[2]) || (safe_add_func_uint8_t_u_u((g_35 , (safe_unary_minus_func_uint8_t_u((~(+(safe_lshift_func_uint8_t_u_s(0UL, 7))))))), (safe_rshift_func_int16_t_s_s(0xF576L, 15)))))), (((0L >= 3L) | (0x66DBE6F2L & 0xEDCDF7ACL)) > g_2853[0][6][6]))))) & g_1370[0]), g_240)) ^ 0x5CL), p_52)) || p_52) | 0xBA32L) & p_52) ^ l_2916[6][0]) >= 0L) , 0xA5A73F4EL) | p_52))), l_2916[6][0])), (-2L)));
                if ((safe_unary_minus_func_int32_t_s(((0L != (safe_div_func_uint32_t_u_u((p_52 | (((((l_2828[1] = g_496[2]) & l_2827) , l_2275[0]) || ((((safe_add_func_int8_t_s_s(((l_2149 = (g_469 <= 255UL)) == (l_2275[0] = ((l_2916[6][0] > 0x4E0076C0L) < g_759))), (-9L))) <= l_2828[0]) < l_2855) ^ p_52)) || p_52)), p_52))) | 0x5DL))))
                {
                    uint16_t l_2949[6][8][4] = {{{0x7CA4L,0xF6FCL,0x9123L,0xED67L},{8UL,65535UL,1UL,65527UL},{1UL,0xAE9CL,0xDBD7L,0x9055L},{0UL,65535UL,65527UL,0x336DL},{0UL,0UL,0UL,1UL},{65535UL,0x7067L,0x9123L,0xF56EL},{0x5DA9L,0xE289L,0UL,0xF6FCL},{0xF6FCL,0xA019L,0x8B92L,0UL}},{{0x9E5CL,1UL,0x3C88L,5UL},{1UL,0x4A34L,0xED67L,0xE289L},{0xE290L,0x7067L,65535UL,0UL},{65527UL,0x88A5L,3UL,0x2CAEL},{1UL,0xA41AL,65527UL,0x9055L},{0x186CL,0x5DA9L,1UL,65529UL},{0xED67L,2UL,0xE01DL,0x8133L},{0xE290L,0xF6FCL,0x8133L,0xAFF1L}},{{1UL,65527UL,0UL,1UL},{65535UL,65535UL,0x8B92L,0x4A00L},{0xFFBAL,0x9D6EL,65531UL,0xDBD7L},{0x7CA4L,0x8C3BL,0x7CA4L,0x8133L},{65535UL,65535UL,1UL,0x8033L},{0UL,0x9123L,0xDBD7L,65535UL},{0xE289L,0xA41AL,0xDBD7L,0x336DL},{0UL,0xB3AFL,1UL,1UL}},{{65535UL,0xE8DEL,0x7CA4L,0xE289L},{0x7CA4L,0xE289L,65531UL,0x6AEBL},{0xFFBAL,65531UL,0x8B92L,65531UL},{65535UL,0xA019L,0UL,5UL},{1UL,0UL,0x8133L,8UL},{0xE290L,0xE8DEL,0xE01DL,1UL},{0xED67L,0x88A5L,1UL,0UL},{0x186CL,1UL,65527UL,65535UL}},{{0xED67L,0xD85BL,65535UL,2UL},{0x9123L,0x7067L,65535UL,0xAE9CL},{65529UL,65535UL,0xAB07L,0UL},{8UL,0xDE63L,0x6AEBL,0xDBD7L},{0x96B7L,1UL,0UL,0xAFF1L},{0x93A9L,65526UL,0xA019L,1UL},{0xA8AAL,1UL,0xE290L,0xAE9CL},{65535UL,8UL,0xE39EL,0xDE63L}},{{0xDBD7L,0xE290L,0UL,0x8B92L},{65535UL,0UL,1UL,1UL},{0xAFF1L,0x1AD0L,1UL,1UL},{65535UL,65535UL,0xE290L,2UL},{0UL,65535UL,65527UL,0x93A9L},{3UL,0xF56EL,0x9304L,65527UL},{0x96B7L,0xF56EL,0x8C3BL,0x93A9L},{0xF56EL,65535UL,0xAE9CL,2UL}}};
                    int32_t l_2966 = 0x17DD1451L;
                    int32_t l_2967[9][8] = {{(-6L),(-9L),0x4A1240D2L,0L,(-9L),0L,0x4A1240D2L,(-9L)},{0xCD7042ABL,0x4A1240D2L,(-6L),0xCD7042ABL,0L,0L,0xCD7042ABL,(-6L)},{(-9L),(-9L),(-8L),1L,0xCD7042ABL,(-8L),0xCD7042ABL,1L},{(-6L),1L,(-6L),0L,1L,0x4A1240D2L,0x4A1240D2L,1L},{1L,0x4A1240D2L,0x4A1240D2L,1L,0L,(-6L),1L,(-6L)},{1L,0xCD7042ABL,(-8L),0xCD7042ABL,1L,(-8L),(-9L),(-9L)},{(-6L),0xCD7042ABL,0L,0L,0xCD7042ABL,(-6L),0x4A1240D2L,0xCD7042ABL},{(-9L),0x4A1240D2L,0L,(-9L),0L,0x4A1240D2L,(-9L),(-6L)},{0xCD7042ABL,1L,(-8L),(-9L),(-9L),(-8L),1L,0xCD7042ABL}};
                    int i, j, k;
                    l_2828[0] = (((safe_rshift_func_uint8_t_u_s(((safe_sub_func_uint16_t_u_u((l_1706 = (((safe_add_func_uint32_t_u_u(0UL, ((safe_lshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s(0x2BEDL, (safe_div_func_int16_t_s_s(p_52, (safe_add_func_uint8_t_u_u(251UL, ((g_506 = 0x1FEC4E9FL) , (((+g_240) < (+((0L != p_52) == (((l_2916[6][0] = (p_52 <= 0x911DL)) ^ g_759) >= l_2938)))) | g_1798[5][2])))))))) , l_2916[3][2]), 2)) & p_52))) > p_52) & p_52)), p_52)) || g_240), 6)) && p_52) > g_2043);
for (l_1706 = 0; l_1706 < 8; l_1706++)
                        l_3147[g_275][l_1706] = 0x254F9A70L;
                    if ((safe_rshift_func_int8_t_s_u((((l_2829 = (g_982 , (safe_lshift_func_int8_t_s_s((-10L), 1)))) >= (((safe_add_func_int32_t_s_s(0xA5992450L, p_52)) >= (+((safe_rshift_func_int16_t_s_u(((g_496[2] && 4294967295UL) > g_335), 11)) & l_2828[1]))) <= (p_52 == 0L))) , 0x0FL), g_2043)))
                    {
                        int32_t l_2964 = 0xE67AA87BL;
                        int32_t l_2972 = (-2L);
                        ;
                        ;
lbl_2983:
                        g_2853[2][1][1] = ((safe_lshift_func_uint16_t_u_u((l_2972 = (l_2966 = ((safe_add_func_int8_t_s_s(g_759, (p_52 , p_52))) >= 0x76L))), ((l_2149 = 0xA08AA8BCL) , ((l_2916[2][2] = p_52) && ((safe_rshift_func_uint16_t_u_u(g_1369, 8)) >= (safe_div_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((0x6AL < (safe_add_func_uint16_t_u_u((~((0xAFL != g_982) <= l_2964)), g_275))), g_1798[5][1])), 0xCBE8L))))))) == l_2982);
                        l_2972 = 4L;
                        l_2916[6][0] = ((safe_add_func_uint8_t_u_u(p_52, (safe_sub_func_uint32_t_u_u(l_2967[5][3], ((((l_2275[0] = (((safe_add_func_int8_t_s_s((g_154 = (safe_sub_func_int16_t_s_s(((safe_div_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((((!p_52) > (((safe_div_func_uint32_t_u_u(g_2580[0][7], ((((l_1734[3] = (((g_1370[2] = (safe_mod_func_uint16_t_u_u((((safe_sub_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_s((((safe_div_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(g_1369, (safe_lshift_func_uint8_t_u_s((g_472 = (safe_lshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((l_2966 = 0xFE920EE2L) < (safe_mod_func_uint8_t_u_u((!(l_3018 ^ (safe_sub_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((g_87 = l_2072), 250UL)), 0x400EL)))), l_2274[4]))), l_2964)), 5))), 7)))) | p_52), 0x2E59L)) | g_9) < l_2855), l_2964)) >= l_2100), p_52)) < l_3023) < l_2149), l_2275[7]))) ^ p_52) || p_52)) != g_76) | 0x8A6DCD90L) ^ (-10L)))) >= g_172) | p_52)) , 0xF122L), g_1368)) || g_98[4][3]), g_469)) ^ 0x428EL), g_759))), 0x76L)) != 0x4DL) < l_1724[0])) > g_982) == 0x88D0L) != p_52))))) ^ l_3023);
                    }
                    else
                    {
                        return g_1370[2];
                    }
                    if ((safe_div_func_int16_t_s_s(1L, (safe_lshift_func_int8_t_s_u(l_2967[5][3], (l_2966 = (l_3032[4][2][1] = (safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((-8L), g_469)), g_1798[5][6])))))))))
                    {
{
                        uint32_t l_1536 = 7UL;
                        int32_t l_1540 = 0x3A68B249L;
                        l_1540 = ((!g_1368) && (((safe_mod_func_int16_t_s_s(((((l_3083[2] = ((((safe_sub_func_uint32_t_u_u((g_5210[0] = 4294967286UL), ((0UL & (((safe_mod_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s(((l_2966 = (safe_lshift_func_uint16_t_u_s((l_1536 > g_5844), (((((safe_lshift_func_uint16_t_u_u(65535UL, 3)) , ((-2L) & (g_3486 , (g_3486 , l_2966)))) & l_1706) < l_1536) <= l_1774)))) , g_3486), g_6771)) , l_2966), 0x5DB84211L)) == g_1369) | 0x39L)) > 0x3F73F712L))) | 0L) && (-1L)) , g_1369)) && l_3023) > g_1369) <= l_2002), g_34[0])) == l_1536) ^ 5UL));
                        l_2966 = g_1369;
                    }
                    return g_98[2][0];
                    }
                    else
                    {
                        l_1706 = 0x2DBDC553L;
                    }
;
                    l_2967[6][0] = g_172;
                }
                else
                {
                    int32_t l_3048 = 0x7D1651CAL;
                    const int16_t l_3076 = 0x5B28L;
                    int32_t l_3079 = 6L;
lbl_3080:
                    for (l_2508 = 0; (l_2508 <= 4); l_2508 += 1)
                    {
                        int32_t l_3033 = 0xA57E4991L;
                        l_3033 = 0x28722BCFL;
                        l_1734[3] = (safe_lshift_func_int8_t_s_u(l_2149, (((-7L) >= l_3036[0]) , (~4UL))));
                        if (p_52)
                            break;
                    }
{
                        int32_t l_1918 = 0x53669838L;
                        int i;
                        l_1918 = (safe_sub_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((l_1865[g_68] , (g_1684[g_68] || ((g_759 , g_759) && (+(g_3600 = (!(+(safe_add_func_int32_t_s_s(g_759, 0x6F544798L))))))))), 0x80479FE7L)), 0x483FL));
                    }
;
                    for (g_76 = 1; (g_76 <= 4); g_76 += 1)
                    {
for (g_5512 = 0; g_5512 < 2; g_5512 += 1)
                    {
                        ;
                    };
if (g_5225)
                            continue;
                    l_75 = (l_3083[2] = (l_3023 | (safe_sub_func_int8_t_s_s(g_2580[0][7], p_52))));
                        g_2853[0][0][3] = ((safe_mod_func_uint8_t_u_u(p_52, l_3067)) ^ (0x9780L ^ (safe_rshift_func_int8_t_s_s(0xA1L, 2))));
                    }
                }
                g_2853[2][8][5] = ((safe_add_func_uint16_t_u_u((((safe_sub_func_int16_t_s_s(((g_184 = (safe_mod_func_uint16_t_u_u(l_2827, g_204))) ^ ((g_1369 , 7L) , p_52)), (l_2149 = ((((l_2828[0] = (0x80L && (l_2275[0] = (safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((g_1370[2] > (g_759 = (g_335 || (l_2958 > 5UL)))), 7)), l_3018))))) & g_352) , l_3083[2]) == 0xF9017BF7L)))) > l_3147[2][0]) || 0L), 1L)) || (-7L));
            }
        }
    }
                                   int32_t BgBgBgl_2508 = (~(((((~((~(((~(l_2938)) | g_469))))) * ((~(g_2043)) % l_2508)) | (~(((~((~((~(g_352)))))) && (g_1288 % (l_1721 % g_759)))))) && ((~((~((~(g_35)))))) << g_240))));
uint32_t BgBgBhg_469 = (~(((~((BgBgBgl_2508 * (~(((g_352 * (~((~((g_469 ^ l_2508)))))) % l_1721)))))) ^ (~(((~(l_2938)) & (~(((~((g_240 + (~((~(g_1288))))))) ^ (g_35 | (g_2043 + g_759)))))))))));
int32_t BgBgBig_240 = (~(((~(((~(((~((g_1288 % g_240))) && (~(g_352))))) & (~((((~(g_759)) + BgBgBgl_2508) | (l_2938 ^ (l_2508 ^ g_35)))))))) + (~(((BgBgBhg_469 + (g_2043 * g_469)) & (~((~((~((~((~(l_1721))))))))))))))));
uint32_t BgBgBjg_759 = (~(((~(((g_1288 & ((~(g_35)) ^ (~(BgBgBgl_2508)))) && (~(g_352))))) & ((~((~((g_469 * l_2508))))) & ((~((~(l_2938)))) % ((g_759 * (g_240 | l_1721)) % ((~((g_2043 + BgBgBig_240))) | BgBgBhg_469)))))));
int32_t BgBgBkg_2043 = (~((((~((~(((~(((g_1288 && l_2938) | (g_240 ^ (BgBgBgl_2508 && (~(BgBgBjg_759))))))) + ((~(l_2508)) & (~(l_1721)))))))) && ((~((g_469 ^ (g_2043 && BgBgBhg_469)))) ^ BgBgBig_240)) & ((~(((~(g_35)) % g_759))) + (~(g_352))))));
uint16_t BgBgBll_2938 = (~(((~((BgBgBig_240 & (BgBgBkg_2043 * (~(l_2938)))))) & ((~((l_2508 | (l_1721 & ((~(g_240)) * BgBgBjg_759))))) % ((~(((~((((~(g_469)) | ((g_759 && BgBgBhg_469) | BgBgBgl_2508)) % g_2043))) % g_35))) % ((~(g_1288)) * g_352))))));
                                   if ((g_1369 > l_2712))
                    { if (l_2508)
                    if(((BgBgBll_2938 > g_2043) && BgBgBig_240)){
BgBgBgl_2508 = l_2508;
BgBgBhg_469 = g_469;
BgBgBig_240 = g_240;
BgBgBjg_759 = g_759;
BgBgBkg_2043 = g_2043;
BgBgBll_2938 = l_2938;
                                   if ((l_2938>=7256))
                    l_2508 = (~(((l_2938 ^ ((~(g_2043)) & BgBgBll_2938)) & ((~((~((((~(g_240)) && BgBgBgl_2508) | (g_759 * (~((~(((~(g_469)) % (~(g_1288))))))))))))) ^ (((l_2508 >> (BgBgBjg_759 % BgBgBhg_469)) | g_352) >> (((g_35 + l_1721) & BgBgBkg_2043) && (~(BgBgBig_240))))))));
g_469 = (~(((((~(g_759)) % l_2938) | ((((~(((~((l_2508 * BgBgBll_2938))) >> (g_240 % BgBgBig_240)))) | BgBgBgl_2508) * (~(g_469))) + (g_2043 * g_352))) + (~((((~(g_1288)) && (~((~(((l_1721 | BgBgBkg_2043) * g_35)))))) % (~((BgBgBhg_469 + BgBgBjg_759)))))))));
g_240 = (~((g_352 << (((((~(l_2508)) & g_469) ^ (~((g_35 & BgBgBkg_2043)))) + ((((~(l_2938)) ^ g_240) ^ (~(l_1721))) & ((BgBgBhg_469 ^ BgBgBll_2938) | (~(BgBgBgl_2508))))) && (g_2043 >> ((~((~((g_759 ^ g_1288))))) * (BgBgBig_240 >> BgBgBjg_759)))))));
g_759 = (~(((~((((~(g_35)) ^ (~((~(BgBgBgl_2508))))) * (g_759 & g_240)))) ^ ((g_2043 >> BgBgBig_240) && (((BgBgBhg_469 + (g_352 + BgBgBjg_759)) + ((~((l_2508 % l_2938))) + ((~(BgBgBll_2938)) | (l_1721 % BgBgBkg_2043)))) ^ ((~((~(g_1288)))) && (~(g_469))))))));
g_2043 = (~((((~((~(((~(BgBgBll_2938)) && (g_2043 && (~(BgBgBhg_469)))))))) >> ((~((l_2508 % BgBgBjg_759))) && (((~(BgBgBig_240)) && (g_352 + ((BgBgBkg_2043 % (~((l_1721 % g_1288)))) ^ g_35))) * (~((~((l_2938 & g_240)))))))) && (~((((~((~((~(g_759)))))) & (~(g_469))) & BgBgBgl_2508))))));
l_2938 = (~((((~(g_2043)) | (((l_2938 && l_2508) % (~((l_1721 ^ (~((~(BgBgBig_240)))))))) ^ (~(((((BgBgBll_2938 + (~(g_352))) & g_759) && g_240) & (BgBgBkg_2043 + BgBgBgl_2508)))))) * ((~(((~(g_469)) ^ BgBgBhg_469))) % (~((BgBgBjg_759 | (g_1288 & g_35))))))));
if((!l_1721)){
printf("l_2508=%lld\n", (long long)l_2508);
l_2508 = (~((((~((~((~(((~((~((BgBgBgl_2508 << (~(BgBgBkg_2043))))))) & (g_240 && BgBgBhg_469)))))))) ^ (((~(((~((~(g_759)))) % (BgBgBjg_759 ^ ((~(l_2938)) + g_35))))) * (~(((l_2508 | l_1721) % g_352)))) >> ((~(((g_2043 % g_1288) >> BgBgBig_240))) << BgBgBll_2938))) >> g_469)));
goto lbl_3080;
}
if(!((g_1288 < g_759))){
;
g_9 += 1;
                    goto lbl_2983;
}
if((g_2043>-2)){
printf("g_240=%lld\n", (long long)g_240);
;
}
if(((!g_1288) || (g_35<-1))){
printf("g_759=%llu\n", (unsigned long long)g_759);
;
}
if((g_759 < BgBgBll_2938)){
;
{
                        uint32_t l_1536 = 7UL;
                        int32_t l_1540 = 0x3A68B249L;
                        l_1540 = ((!g_1345) && (((safe_mod_func_int16_t_s_s(((((g_1370[2] = ((((safe_sub_func_uint32_t_u_u((g_5210[0] = 4294967286UL), ((0UL & (((safe_mod_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s(((g_506 = (safe_lshift_func_uint16_t_u_s((l_1536 > g_335), (((((safe_lshift_func_uint16_t_u_u(65535UL, 3)) , ((-2L) & (l_2829 , (l_2829 , g_506)))) & g_3486) < l_1536) <= l_3153)))) , l_2829), g_68)) , g_204), 0x5DB84211L)) == g_9) | 0x39L)) > 0x3F73F712L))) | 0L) && (-1L)) , g_9)) && g_1288) > g_9) <= l_1867), g_34[0])) == l_1536) ^ 5UL));
                        g_506 = g_9;
                    }
                    BgBgBkg_2043 = (~((((((~((~(g_352)))) | l_2508) * ((l_1721 * (~((g_2043 >> BgBgBjg_759)))) * (~((g_240 | BgBgBhg_469))))) | (~(l_2938))) * (((~(g_1288)) % (BgBgBll_2938 << BgBgBkg_2043)) >> (~(((g_759 << g_469) && (((~(BgBgBgl_2508)) | g_35) | BgBgBig_240))))))));
goto lbl_3126;
}
LABEL_gBgBm: if((BgBgBll_2938 > g_1288)){
printf("l_2938=%llu\n", (unsigned long long)l_2938);
BgBgBig_240 = (~(((~((((~((~(BgBgBll_2938)))) | ((~(((g_352 % (g_1288 % (g_759 | l_1721))) * BgBgBjg_759))) && g_35)) & (((~((~(l_2508)))) * ((BgBgBhg_469 << g_2043) && g_240)) ^ ((l_2938 ^ (BgBgBgl_2508 && g_469)) << (~(BgBgBig_240))))))) % (~((~((~((~(BgBgBkg_2043)))))))))));
goto lbl_3126;
}
}}
g_469 = BgBgBhg_469;
g_240 = BgBgBig_240;
g_2043 = BgBgBkg_2043;
    for (g_1369 = 18; (g_1369 < 25); ++g_1369)
    {
        uint32_t l_3194 = 0UL;
        int32_t l_3195 = 0xB03C3FA3L;
        int32_t l_3196 = 1L;
        l_75 = (l_3195 = (safe_lshift_func_int8_t_s_u(p_52, ((safe_lshift_func_uint16_t_u_s(((((((g_2422 = (safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(p_52, (g_1798[1][4] != ((!(safe_lshift_func_int8_t_s_s(((((g_1684[0] > (safe_rshift_func_int16_t_s_u((((g_184 = ((l_1734[3] | (safe_div_func_int16_t_s_s(((l_3194 = (safe_sub_func_int16_t_s_s(0x2251L, (0x6095DBC2L | (p_52 && (g_3193 = 0x87L)))))) , l_3194), p_52))) && g_496[2])) <= p_52) > 1UL), l_3195))) || l_1724[2]) && l_3195) , 6L), p_52))) || 1L)))), 65528UL))) || l_3196) , l_2982) , 6L) , p_52) ^ l_2421), l_3195)) , 0UL))));
        l_3196 = (safe_add_func_uint16_t_u_u(p_52, ((l_3195 = (~(((((p_52 & l_3196) ^ 1L) , (g_204 = g_982)) , g_1368) , ((((1UL | g_87) | p_52) < p_52) || p_52)))) , 0x726BL)));
    }
                    return p_52;
}
static uint16_t func_54(int32_t p_55, uint16_t p_56, uint32_t p_57, const int16_t p_58, int16_t p_59)
{
    uint32_t l_1687 = 0x041CB36AL;
    int32_t l_1696 = 0x79302BB6L;
    uint32_t l_1704 = 0xC67D7B3DL;
    int32_t l_1705 = (-1L);
    for (g_897 = 20; (g_897 > (-16)); g_897 = safe_sub_func_uint8_t_u_u(g_897, 7))
    {
        return l_1687;
    }
    l_1705 = (((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s((l_1696 = (safe_mod_func_int32_t_s_s(l_1687, (g_76 = (p_59 , (g_1368 = 6UL)))))), (+(((((safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(((((safe_unary_minus_func_int16_t_s(l_1687)) >= p_59) > ((1UL != p_56) == 4294967295UL)) > (((safe_unary_minus_func_uint8_t_u(p_56)) | p_58) || l_1704)), 0)), l_1687)) < l_1687) != p_56) <= g_1138) > l_1704)))), l_1704)), g_68)) == 3L) || 0x83E6L);
    return g_98[1][1];
}
static int32_t func_60(uint8_t p_61)
{
    uint16_t l_94 = 65532UL;
    int32_t l_136 = 0xAD0BAEE1L;
    int32_t l_173[1];
    uint8_t l_206 = 4UL;
    int32_t l_287 = 0x2DAF40BCL;
    int16_t l_331[8];
    int32_t l_332 = 0x498514B6L;
    int8_t l_333[9][2][3] = {{{(-1L),2L,(-1L)},{0x33L,0xE0L,1L}},{{0x33L,7L,0x33L},{(-1L),0x8BL,(-1L)}},{{0x33L,0x16L,0xDEL},{0x33L,0x70L,1L}},{{(-1L),0x3DL,0L},{0x33L,(-8L),0x90L}},{{0x33L,0xE7L,(-1L)},{(-1L),2L,(-1L)}},{{0x33L,0xE0L,1L},{0x33L,7L,0x33L}},{{(-1L),0x8BL,(-1L)},{0x33L,0x16L,0xDEL}},{{0x33L,0x70L,1L},{(-1L),0x3DL,0L}},{{0x33L,(-8L),0x90L},{0x33L,0xE7L,(-1L)}}};
    int32_t l_334[6] = {0xF4225F34L,0x9EFBFE89L,0xF4225F34L,0xF4225F34L,0x9EFBFE89L,0xF4225F34L};
    int32_t l_336 = 0x77E4473CL;
    int8_t l_391 = 0x20L;
    const uint16_t l_397 = 0x9738L;
    uint32_t l_398 = 1UL;
    uint32_t l_483 = 4294967290UL;
    const int32_t l_617 = 0x7EB6E80EL;
    int32_t l_787[1];
    uint32_t l_964 = 0xBD91FE29L;
    int8_t l_999 = 0x11L;
    int8_t l_1000 = (-9L);
    uint16_t l_1111[8] = {0x7444L,0x7444L,0x7444L,0x7444L,0x7444L,0x7444L,0x7444L,0x7444L};
    uint32_t l_1158 = 0xE8CAA913L;
    int8_t l_1304 = 0L;
    uint8_t l_1439 = 0xF1L;
    uint16_t l_1632 = 65535UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        { if ((g_76 > l_1439))
                    l_173[i] = 0L;}
    for (i = 0; i < 8; i++)
        l_331[i] = (-1L);
    l_336 = (safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s((l_173[0] = (safe_add_func_int16_t_s_s((g_335 = (safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s(l_173[0], (p_61 , p_61))), 6)), (safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((g_154 = l_173[0]), (safe_mod_func_int32_t_s_s((((safe_div_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((4294967290UL ^ ((safe_rshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((((l_332 = (g_184 ^ ((safe_sub_func_uint8_t_u_u((l_136 = (safe_sub_func_uint16_t_u_u((((((+(safe_sub_func_uint32_t_u_u((p_61 || g_34[0]), (safe_sub_func_int16_t_s_s(((((safe_add_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u(0xD4A5L, 3)) , 1L), 0x81C66F58L)) > 0x37CAL) > l_206) , (-1L)), 0L))))) != l_94) | 0L) <= p_61) & g_240), l_173[0]))), l_331[5])) > 0xC7ACL))) || p_61) || l_333[3][0][1]) ^ l_287), (-7L))), p_61)) || g_240)) <= g_34[0]), p_61)), 0x8078L)) <= l_334[1]) , l_287), 0x591AD4FCL)))) | l_333[1][1][2]), 247UL)), g_34[0]))))), g_76))), g_87)), 1UL));
                    if ((((safe_div_func_int8_t_s_s((0xEC34L > (l_336 = (l_173[0] = (safe_mod_func_uint8_t_u_u((g_184 , p_61), l_136))))), (safe_add_func_uint32_t_u_u(0x59411BBBL, g_154)))) <= ((((safe_rshift_func_int8_t_s_u(g_68, 0)) != g_87) ^ (safe_div_func_uint16_t_u_u((((safe_sub_func_uint8_t_u_u((g_352 = (~(safe_mod_func_int8_t_s_s(((l_332 = ((9L & p_61) | p_61)) || 254UL), g_154)))), p_61)) <= (-1L)) || 0L), 0x3CD6L))) ^ p_61)) ^ 0x81A5ED34L))
    {
        return l_173[0];
    }
}
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_13[i], "g_13[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_34[i], "g_34[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_98[i][j], "g_98[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);
        }
    }
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_240, "g_240", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_335, "g_335", print_hash_value);
    transparent_crc(g_352, "g_352", print_hash_value);
    transparent_crc(g_469, "g_469", print_hash_value);
    transparent_crc(g_472, "g_472", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_496[i], "g_496[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_506, "g_506", print_hash_value);
    transparent_crc(g_573, "g_573", print_hash_value);
    transparent_crc(g_759, "g_759", print_hash_value);
    transparent_crc(g_897, "g_897", print_hash_value);
    transparent_crc(g_982, "g_982", print_hash_value);
    transparent_crc(g_1138, "g_1138", print_hash_value);
    transparent_crc(g_1288, "g_1288", print_hash_value);
    transparent_crc(g_1345, "g_1345", print_hash_value);
    transparent_crc(g_1352, "g_1352", print_hash_value);
    transparent_crc(g_1368, "g_1368", print_hash_value);
    transparent_crc(g_1369, "g_1369", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1370[i], "g_1370[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_1599, "g_1599", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1684[i], "g_1684[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_1798[i][j], "g_1798[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);
        }
    }
    transparent_crc(g_2043, "g_2043", print_hash_value);
    transparent_crc(g_2422, "g_2422", print_hash_value);
    transparent_crc(g_2440, "g_2440", print_hash_value);
    transparent_crc(g_2467, "g_2467", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_2580[i][j], "g_2580[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);
        }
    }
    transparent_crc(g_2852, "g_2852", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_2853[i][j][k], "g_2853[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_3109[i], "g_3109[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_3172, "g_3172", print_hash_value);
    transparent_crc(g_3193, "g_3193", print_hash_value);
    transparent_crc(g_3317, "g_3317", print_hash_value);
    transparent_crc(g_3463, "g_3463", print_hash_value);
    transparent_crc(g_3486, "g_3486", print_hash_value);
    transparent_crc(g_3600, "g_3600", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_3935[i][j], "g_3935[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);
        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_4423[i], "g_4423[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_4475, "g_4475", print_hash_value);
    transparent_crc(g_4689, "g_4689", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_5210[i], "g_5210[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_5225, "g_5225", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_5446[i], "g_5446[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_5512, "g_5512", print_hash_value);
    transparent_crc(g_5844, "g_5844", print_hash_value);
    transparent_crc(g_6029, "g_6029", print_hash_value);
    transparent_crc(g_6428, "g_6428", print_hash_value);
    transparent_crc(g_6771, "g_6771", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}