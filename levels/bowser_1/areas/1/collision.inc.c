// 0x07002838 - 0x07002AC8
const Collision bowser_1_seg7_collision_level[] = {
    COL_INIT(),
    COL_VERTEX_INIT(0x1D),
    COL_VERTEX(2172, 307, -2171),
    COL_VERTEX(0, 307, -3071),
    COL_VERTEX(1086, 307, -1085),
    COL_VERTEX(-2171, 307, -2171),
    COL_VERTEX(0, 307, -1535),
    COL_VERTEX(-2171, 307, 2172),
    COL_VERTEX(0, -2047, 3072),
    COL_VERTEX(0, 307, 3072),
    COL_VERTEX(-3071, -2047, 0),
    COL_VERTEX(-3071, 307, 0),
    COL_VERTEX(-2171, -2047, 2172),
    COL_VERTEX(-1535, 307, 0),
    COL_VERTEX(-1085, 307, -1085),
    COL_VERTEX(-1085, 307, 1086),
    COL_VERTEX(-2171, -2047, -2171),
    COL_VERTEX(0, 307, 1536),
    COL_VERTEX(3072, 307, 0),
    COL_VERTEX(0, -2047, -3071),
    COL_VERTEX(2172, -2047, 2172),
    COL_VERTEX(3072, -2047, 0),
    COL_VERTEX(2172, 307, 2172),
    COL_VERTEX(2172, -2047, -2171),
    COL_VERTEX(1536, 307, 0),
    COL_VERTEX(1086, 307, 1086),
    COL_VERTEX(0, 307, 0),
    COL_VERTEX(7168, -6143, -7167),
    COL_VERTEX(-7167, -6143, -7167),
    COL_VERTEX(-7167, -6143, 7168),
    COL_VERTEX(7168, -6143, 7168),
    COL_TRI_INIT(SURFACE_NOISE_SLIPPERY, 40),
    COL_TRI(5, 6, 7),
    COL_TRI(0, 1, 2),
    COL_TRI(1, 3, 4),
    COL_TRI(5, 7, 15),
    COL_TRI(8, 9, 3),
    COL_TRI(10, 9, 8),
    COL_TRI(10, 5, 9),
    COL_TRI(9, 11, 12),
    COL_TRI(9, 13, 11),
    COL_TRI(9, 5, 13),
    COL_TRI(9, 12, 3),
    COL_TRI(4, 3, 12),
    COL_TRI(8, 3, 14),
    COL_TRI(14, 3, 1),
    COL_TRI(6, 5, 10),
    COL_TRI(5, 15, 13),
    COL_TRI(7, 20, 23),
    COL_TRI(2, 1, 4),
    COL_TRI(16, 0, 2),
    COL_TRI(16, 2, 22),
    COL_TRI(14, 1, 17),
    COL_TRI(17, 1, 0),
    COL_TRI(18, 20, 7),
    COL_TRI(18, 7, 6),
    COL_TRI(7, 23, 15),
    COL_TRI(17, 0, 21),
    COL_TRI(19, 20, 18),
    COL_TRI(19, 16, 20),
    COL_TRI(20, 22, 23),
    COL_TRI(20, 16, 22),
    COL_TRI(21, 16, 19),
    COL_TRI(21, 0, 16),
    COL_TRI(11, 24, 12),
    COL_TRI(13, 24, 11),
    COL_TRI(2, 24, 22),
    COL_TRI(24, 2, 4),
    COL_TRI(23, 24, 15),
    COL_TRI(24, 4, 12),
    COL_TRI(15, 24, 13),
    COL_TRI(22, 24, 23),
    COL_TRI_INIT(SURFACE_DEATH_PLANE, 2),
    COL_TRI(25, 26, 27),
    COL_TRI(25, 27, 28),
    COL_TRI_STOP(),
    COL_SPECIAL_INIT(22),
    SPECIAL_OBJECT_WITH_YAW(/*preset*/ special_null_start,   /*pos*/     0, 1843,     0, /*yaw*/ 1423), // unused, probably an early way to set intial position
    SPECIAL_OBJECT(/*preset*/ special_mine,         /*pos*/  2949,  589,     0),
    SPECIAL_OBJECT(/*preset*/ special_mine,         /*pos*/     0,  589, -2949),
    SPECIAL_OBJECT(/*preset*/ special_mine,         /*pos*/     0,  589,  2949),
    SPECIAL_OBJECT(/*preset*/ special_mine,         /*pos*/ -2949,  589,     0),
    SPECIAL_OBJECT(/*preset*/ special_bowser,       /*pos*/     0,  300, -1000),
    SPECIAL_OBJECT_WITH_YAW(/*preset*/ special_level_geo_03, /*pos*/     0,  384,  3072, /*yaw*/    0),
    SPECIAL_OBJECT_WITH_YAW(/*preset*/ special_level_geo_03, /*pos*/ -2171,  384, -2171, /*yaw*/    0),
    SPECIAL_OBJECT_WITH_YAW(/*preset*/ special_level_geo_03, /*pos*/     0,  384, -3071, /*yaw*/    0),
    SPECIAL_OBJECT_WITH_YAW(/*preset*/ special_level_geo_03, /*pos*/ -3071,  384,     0, /*yaw*/    0),
    SPECIAL_OBJECT_WITH_YAW(/*preset*/ special_level_geo_03, /*pos*/ -2171,  384,  2172, /*yaw*/    0),
    SPECIAL_OBJECT_WITH_YAW(/*preset*/ special_level_geo_03, /*pos*/ -2621,  384,  1086, /*yaw*/    0),
    SPECIAL_OBJECT_WITH_YAW(/*preset*/ special_level_geo_03, /*pos*/  2172,  384,  2172, /*yaw*/    0),
    SPECIAL_OBJECT_WITH_YAW(/*preset*/ special_level_geo_03, /*pos*/  3072,  384,     0, /*yaw*/    0),
    SPECIAL_OBJECT_WITH_YAW(/*preset*/ special_level_geo_03, /*pos*/  2172,  384, -2171, /*yaw*/    0),
    SPECIAL_OBJECT_WITH_YAW(/*preset*/ special_level_geo_03, /*pos*/ -1085,  384,  2622, /*yaw*/    0),
    SPECIAL_OBJECT_WITH_YAW(/*preset*/ special_level_geo_03, /*pos*/  2622,  384,  1086, /*yaw*/    0),
    SPECIAL_OBJECT_WITH_YAW(/*preset*/ special_level_geo_03, /*pos*/ -2621,  384, -1085, /*yaw*/    0),
    SPECIAL_OBJECT_WITH_YAW(/*preset*/ special_level_geo_03, /*pos*/ -1085,  384, -2621, /*yaw*/    0),
    SPECIAL_OBJECT_WITH_YAW(/*preset*/ special_level_geo_03, /*pos*/  1086,  384, -2621, /*yaw*/    0),
    SPECIAL_OBJECT_WITH_YAW(/*preset*/ special_level_geo_03, /*pos*/  2622,  384, -1085, /*yaw*/    0),
    SPECIAL_OBJECT_WITH_YAW(/*preset*/ special_level_geo_03, /*pos*/  1086,  384,  2622, /*yaw*/    0),
    COL_END(),
};
