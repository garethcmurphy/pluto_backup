#define  PHYSICS                 RMHD
#define  DIMENSIONS              3
#define  COMPONENTS              3
#define  GEOMETRY                CARTESIAN
#define  BODY_FORCE              NO
#define  COOLING                 NO
#define  RECONSTRUCTION          LINEAR
#define  TIME_STEPPING           RK2
#define  DIMENSIONAL_SPLITTING   NO
#define  NTRACER                 0
#define  USER_DEF_PARAMETERS     1

/* -- physics dependent declarations -- */

#define  EOS                     IDEAL
#define  ENTROPY_SWITCH          NO
#define  DIVB_CONTROL            DIV_CLEANING

/* -- user-defined parameters (labels) -- */

#define  VEL_0                   0

/* [Beg] user-defined constants (do not change this line) */

#define  RMHD_FAST_EIGENVALUES   YES
#define  RECONSTRUCT_4VEL        YES

/* [End] user-defined constants (do not change this line) */

/* -- supplementary constants (user editable) -- */ 

#define  INITIAL_SMOOTHING         NO
#define  WARNING_MESSAGES          YES
#define  PRINT_TO_FILE             YES
#define  INTERNAL_BOUNDARY         NO
#define  SHOCK_FLATTENING          NO
#define  CHAR_LIMITING             NO
#define  LIMITER                   VANLEER_LIM
#define  ASSIGN_VECTOR_POTENTIAL   YES
#define  UPDATE_VECTOR_POTENTIAL   NO
