//////////////////////////////////////////////////////////////////////
// gmp-mparam.h
/* Generated by tuneup.c, 2014-03-21, gcc 4.6 */

#define MUL_KARATSUBA_THRESHOLD          12
#define MUL_TOOM3_THRESHOLD              89
#define MUL_TOOM4_THRESHOLD             262
#define MUL_TOOM8H_THRESHOLD            366

#define SQR_BASECASE_THRESHOLD            0  /* always (native) */
#define SQR_KARATSUBA_THRESHOLD          20
#define SQR_TOOM3_THRESHOLD             122
#define SQR_TOOM4_THRESHOLD             366
#define SQR_TOOM8_THRESHOLD             430

#define POWM_THRESHOLD                  956

#define DIVREM_1_NORM_THRESHOLD       MP_SIZE_T_MAX  /* never */
#define DIVREM_1_UNNORM_THRESHOLD     MP_SIZE_T_MAX  /* never */
#define MOD_1_NORM_THRESHOLD              0  /* always */
#define MOD_1_UNNORM_THRESHOLD            0  /* always */
#define USE_PREINV_DIVREM_1               1  /* native */
#define USE_PREINV_MOD_1                  1
#define DIVEXACT_1_THRESHOLD              0  /* always */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always (native) */
#define MOD_1_1_THRESHOLD                 7
#define MOD_1_2_THRESHOLD                 7
#define MOD_1_3_THRESHOLD                11
#define DIVREM_HENSEL_QR_1_THRESHOLD     14
#define RSH_DIVREM_HENSEL_QR_1_THRESHOLD     15
#define DIVREM_EUCLID_HENSEL_THRESHOLD     10

#define MUL_FFT_FULL_THRESHOLD         3904

#define SQR_FFT_FULL_THRESHOLD         3520

#define MULLOW_BASECASE_THRESHOLD         4
#define MULLOW_DC_THRESHOLD              35
#define MULLOW_MUL_THRESHOLD           5789

#define MULHIGH_BASECASE_THRESHOLD        4
#define MULHIGH_DC_THRESHOLD             32
#define MULHIGH_MUL_THRESHOLD          3681

#define MULMOD_2EXPM1_THRESHOLD          14

#define DC_DIV_QR_THRESHOLD              38
#define INV_DIV_QR_THRESHOLD           1970
#define INV_DIVAPPR_Q_N_THRESHOLD        38
#define DC_DIV_Q_THRESHOLD               57
#define INV_DIV_Q_THRESHOLD            1470
#define DC_DIVAPPR_Q_THRESHOLD           67
#define INV_DIVAPPR_Q_THRESHOLD       17327
#define DC_BDIV_QR_THRESHOLD             50
#define DC_BDIV_Q_THRESHOLD              36

#define ROOTREM_THRESHOLD                 6

#define MATRIX22_STRASSEN_THRESHOLD      19
#define HGCD_THRESHOLD                  105
#define HGCD_APPR_THRESHOLD              50
#define HGCD_REDUCE_THRESHOLD          6852
#define GCD_DC_THRESHOLD                396
#define GCDEXT_DC_THRESHOLD             270
#define JACOBI_BASE_METHOD                1

#define GET_STR_DC_THRESHOLD             12
#define GET_STR_PRECOMPUTE_THRESHOLD     20
#define SET_STR_DC_THRESHOLD            258
#define SET_STR_PRECOMPUTE_THRESHOLD   1414

#define FAC_DSC_THRESHOLD               172
#define FAC_ODD_THRESHOLD                25

/* fft_tuning -- autogenerated by tune-fft */

#define FFT_TAB \
   { { 4, 3 }, { 3, 3 }, { 3, 2 }, { 2, 1 }, { 1, 0 } }

#define MULMOD_TAB \
   { 4, 3, 4, 4, 3, 3, 3, 3, 3, 2, 2, 2, 3, 2, 2, 2, 2, 2, 1, 2, 2, 1, 1 }

#define FFT_N_NUM 23

#define FFT_MULMOD_2EXPP1_CUTOFF 256


/* Tuneup completed successfully, took 149 seconds */



//////////////////////////////////////////////////////////////////////
// iDev.Games - MuOnline S9EP2 IGC9.5 - TRONG.WIN - DAO VAN TRONG     
//////////////////////////////////////////////////////////////////////
