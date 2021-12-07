/********************************************************************
 * Autogenerated file, do not edit.
 *******************************************************************/

#include <stdint.h>
#include "sli_bt_gattdb_def.h"

#define GATT_HEADER(F) F
#define GATT_DATA(F) F
GATT_DATA(const uint16_t gattdb_uuidtable_16_map[]) =
{
  0x2800,
  0x2801,
  0x2803,
  0x2a00,
  0x2a01,
  0x2a29,
  0x2a23,
  0x2902,
  0x2a05,
  0x2b2a,
  0x2b29,
};

GATT_DATA(const uint8_t gattdb_uuidtable_128_map[]) =
{
  0x89, 0x62, 0x13, 0x2d, 0x2a, 0x65, 0xec, 0x87, 0x3e, 0x43, 0xc8, 0x38, 0x02, 0x00, 0x00, 0x00, 
  0x63, 0x60, 0x32, 0xe0, 0x37, 0x5e, 0xa4, 0x88, 0x53, 0x4e, 0x6d, 0xfb, 0x64, 0x35, 0xbf, 0xf7, 
};
GATT_DATA(const sli_bt_gattdb_value_t gattdb_attribute_field_22) = {
  .len = 16,
  .data = { 0xf0, 0x19, 0x21, 0xb4, 0x47, 0x8f, 0xa4, 0xbf, 0xa1, 0x4f, 0x63, 0xfd, 0xee, 0xd6, 0x14, 0x1d, }
};
GATT_DATA(sli_bt_gattdb_attribute_chrvalue_t gattdb_attribute_field_20) = {
  .properties = 0x22,
  .max_len = 4,
  .data = { 0x00, 0x00, 0x00, 0x00, },
};
GATT_DATA(const sli_bt_gattdb_value_t gattdb_attribute_field_18) = {
  .len = 16,
  .data = { 0x89, 0x62, 0x13, 0x2d, 0x2a, 0x65, 0xec, 0x87, 0x3e, 0x43, 0xc8, 0x38, 0x01, 0x00, 0x00, 0x00, }
};
GATT_DATA(sli_bt_gattdb_attribute_chrvalue_t gattdb_attribute_field_17) = {
  .properties = 0x02,
  .max_len = 8,
  .data = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, },
};
GATT_DATA(const sli_bt_gattdb_value_t gattdb_attribute_field_15) = {
  .len = 12,
  .data = { 0x53, 0x69, 0x6c, 0x69, 0x63, 0x6f, 0x6e, 0x20, 0x4c, 0x61, 0x62, 0x73, }
};
GATT_DATA(const sli_bt_gattdb_value_t gattdb_attribute_field_13) = {
  .len = 2,
  .data = { 0x0a, 0x18, }
};
GATT_DATA(const sli_bt_gattdb_value_t gattdb_attribute_field_12) = {
  .len = 2,
  .data = { 0x00, 0x00, }
};
GATT_DATA(sli_bt_gattdb_attribute_chrvalue_t gattdb_attribute_field_10) = {
  .properties = 0x0a,
  .max_len = 14,
  .data = { 0x74, 0x61, 0x6e, 0x6d, 0x61, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, },
};
GATT_DATA(const sli_bt_gattdb_value_t gattdb_attribute_field_8) = {
  .len = 2,
  .data = { 0x00, 0x18, }
};
GATT_DATA(sli_bt_gattdb_attribute_chrvalue_t gattdb_attribute_field_7) = {
  .properties = 0x0a,
  .max_len = 1,
  .data = { 0x00, },
};
GATT_DATA(sli_bt_gattdb_attribute_chrvalue_t gattdb_attribute_field_5) = {
  .properties = 0x02,
  .max_len = 16,
  .data = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, },
};
GATT_DATA(sli_bt_gattdb_attribute_chrvalue_t gattdb_attribute_field_2) = {
  .properties = 0x20,
  .max_len = 4,
  .data = { 0x00, 0x00, 0x00, 0x00, },
};
GATT_DATA(const sli_bt_gattdb_value_t gattdb_attribute_field_0) = {
  .len = 2,
  .data = { 0x01, 0x18, }
};

GATT_DATA(const sli_bt_gattdb_attribute_t gattdb_attributes_map[]) = {
  { .handle = 0x01, .uuid = 0x0000, .permissions = 0x801, .caps = 0xffff, .state = 0x00, .datatype = 0x00, .constdata = &gattdb_attribute_field_0 },
  { .handle = 0x02, .uuid = 0x0002, .permissions = 0x801, .caps = 0xffff, .state = 0x00, .datatype = 0x05, .characteristic = { .properties = 0x20, .char_uuid = 0x0008 } },
  { .handle = 0x03, .uuid = 0x0008, .permissions = 0x800, .caps = 0xffff, .state = 0x00, .datatype = 0x01, .dynamicdata = &gattdb_attribute_field_2 },
  { .handle = 0x04, .uuid = 0x0007, .permissions = 0x803, .caps = 0xffff, .state = 0x00, .datatype = 0x03, .configdata = { .flags = 0x02, .clientconfig_index = 0x00 } },
  { .handle = 0x05, .uuid = 0x0002, .permissions = 0x801, .caps = 0xffff, .state = 0x00, .datatype = 0x05, .characteristic = { .properties = 0x02, .char_uuid = 0x0009 } },
  { .handle = 0x06, .uuid = 0x0009, .permissions = 0x801, .caps = 0xffff, .state = 0x00, .datatype = 0x01, .dynamicdata = &gattdb_attribute_field_5 },
  { .handle = 0x07, .uuid = 0x0002, .permissions = 0x801, .caps = 0xffff, .state = 0x00, .datatype = 0x05, .characteristic = { .properties = 0x0a, .char_uuid = 0x000a } },
  { .handle = 0x08, .uuid = 0x000a, .permissions = 0x803, .caps = 0xffff, .state = 0x00, .datatype = 0x01, .dynamicdata = &gattdb_attribute_field_7 },
  { .handle = 0x09, .uuid = 0x0000, .permissions = 0x801, .caps = 0xffff, .state = 0x00, .datatype = 0x00, .constdata = &gattdb_attribute_field_8 },
  { .handle = 0x0a, .uuid = 0x0002, .permissions = 0x801, .caps = 0xffff, .state = 0x00, .datatype = 0x05, .characteristic = { .properties = 0x0a, .char_uuid = 0x0003 } },
  { .handle = 0x0b, .uuid = 0x0003, .permissions = 0x803, .caps = 0xffff, .state = 0x00, .datatype = 0x01, .dynamicdata = &gattdb_attribute_field_10 },
  { .handle = 0x0c, .uuid = 0x0002, .permissions = 0x801, .caps = 0xffff, .state = 0x00, .datatype = 0x05, .characteristic = { .properties = 0x02, .char_uuid = 0x0004 } },
  { .handle = 0x0d, .uuid = 0x0004, .permissions = 0x801, .caps = 0xffff, .state = 0x00, .datatype = 0x00, .constdata = &gattdb_attribute_field_12 },
  { .handle = 0x0e, .uuid = 0x0000, .permissions = 0x801, .caps = 0xffff, .state = 0x00, .datatype = 0x00, .constdata = &gattdb_attribute_field_13 },
  { .handle = 0x0f, .uuid = 0x0002, .permissions = 0x801, .caps = 0xffff, .state = 0x00, .datatype = 0x05, .characteristic = { .properties = 0x02, .char_uuid = 0x0005 } },
  { .handle = 0x10, .uuid = 0x0005, .permissions = 0x801, .caps = 0xffff, .state = 0x00, .datatype = 0x00, .constdata = &gattdb_attribute_field_15 },
  { .handle = 0x11, .uuid = 0x0002, .permissions = 0x801, .caps = 0xffff, .state = 0x00, .datatype = 0x05, .characteristic = { .properties = 0x02, .char_uuid = 0x0006 } },
  { .handle = 0x12, .uuid = 0x0006, .permissions = 0x801, .caps = 0xffff, .state = 0x00, .datatype = 0x01, .dynamicdata = &gattdb_attribute_field_17 },
  { .handle = 0x13, .uuid = 0x0000, .permissions = 0x8801, .caps = 0xffff, .state = 0x00, .datatype = 0x00, .constdata = &gattdb_attribute_field_18 },
  { .handle = 0x14, .uuid = 0x0002, .permissions = 0x801, .caps = 0xffff, .state = 0x00, .datatype = 0x05, .characteristic = { .properties = 0x22, .char_uuid = 0x8000 } },
  { .handle = 0x15, .uuid = 0x8000, .permissions = 0x4841, .caps = 0xffff, .state = 0x00, .datatype = 0x01, .dynamicdata = &gattdb_attribute_field_20 },
  { .handle = 0x16, .uuid = 0x0007, .permissions = 0x803, .caps = 0xffff, .state = 0x00, .datatype = 0x03, .configdata = { .flags = 0x02, .clientconfig_index = 0x01 } },
  { .handle = 0x17, .uuid = 0x0000, .permissions = 0x801, .caps = 0xffff, .state = 0x00, .datatype = 0x00, .constdata = &gattdb_attribute_field_22 },
  { .handle = 0x18, .uuid = 0x0002, .permissions = 0x801, .caps = 0xffff, .state = 0x00, .datatype = 0x05, .characteristic = { .properties = 0x08, .char_uuid = 0x8001 } },
  { .handle = 0x19, .uuid = 0x8001, .permissions = 0x802, .caps = 0xffff, .state = 0x00, .datatype = 0x07, .dynamicdata = NULL },
};

GATT_HEADER(const sli_bt_gattdb_t gattdb) = {
  .attributes = gattdb_attributes_map,
  .attribute_table_size = 25,
  .attribute_num = 25,
  .uuid16 = gattdb_uuidtable_16_map,
  .uuid16_table_size = 11,
  .uuid16_num = 11,
  .uuid128 = gattdb_uuidtable_128_map,
  .uuid128_table_size = 2,
  .uuid128_num = 2,
  .num_ccfg = 2,
  .caps_mask = 0xffff,
  .enabled_caps = 0xffff,
};
const sli_bt_gattdb_t *static_gattdb = &gattdb;
