/*
 * Copyright (c) 2014 Oleg Efimov <efimovov@gmail.com>
 *
 * protobuf2json-c is free software; you can redistribute it
 * and/or modify it under the terms of the MIT license.
 * See LICENSE for details.
 */

TEST_DECLARE(protobuf2json_file__person__success)
TEST_DECLARE(protobuf2json_string__person__required)
TEST_DECLARE(protobuf2json_string__person__optional)
TEST_DECLARE(protobuf2json_string__person__repeated_message)
TEST_DECLARE(protobuf2json_string__bar__default_values)
TEST_DECLARE(protobuf2json_string__person__error_in_nested_message)
TEST_DECLARE(protobuf2json_string__person__error_cannot_dump_string)

TEST_DECLARE(json2protobuf_file__person__success)
TEST_DECLARE(json2protobuf_file__person__error_cannot_parse_bad_message)
TEST_DECLARE(json2protobuf_file__person__error_cannot_parse_bad_json)
TEST_DECLARE(json2protobuf_file__person__error_cannot_parse_unexistent_file)
TEST_DECLARE(json2protobuf_string__person__error_cannot_parse_wrong_string)
TEST_DECLARE(json2protobuf_string__person__required)
TEST_DECLARE(json2protobuf_string__person__optional)
TEST_DECLARE(json2protobuf_string__person__repeated_message)
TEST_DECLARE(json2protobuf_string__bar__default_values)
TEST_DECLARE(json2protobuf_string__numeric_values__values)
TEST_DECLARE(json2protobuf_string__boolean_values__values)
TEST_DECLARE(json2protobuf_string__boolean_values__values)
TEST_DECLARE(json2protobuf_string__person__error_is_not_object)
TEST_DECLARE(json2protobuf_string__person__error_unknown_field)
TEST_DECLARE(json2protobuf_string__person__error_unknown_enum_value)
TEST_DECLARE(json2protobuf_string__person__error_is_not_array)
TEST_DECLARE(json2protobuf_string__bar__error_string_is_not_string_required_for_string)
TEST_DECLARE(json2protobuf_string__bar__error_is_not_string_required_for_enum)
TEST_DECLARE(json2protobuf_string__numeric_values__error_is_not_integer_required_for_int32)
TEST_DECLARE(json2protobuf_string__numeric_values__error_is_not_integer_required_for_sint32)
TEST_DECLARE(json2protobuf_string__numeric_values__error_is_not_integer_required_for_sfixed32)
TEST_DECLARE(json2protobuf_string__numeric_values__error_is_not_integer_required_for_uint32)
TEST_DECLARE(json2protobuf_string__numeric_values__error_is_not_integer_required_for_fixed32)
TEST_DECLARE(json2protobuf_string__numeric_values__error_is_not_integer_required_for_int64)
TEST_DECLARE(json2protobuf_string__numeric_values__error_is_not_integer_required_for_sint64)
TEST_DECLARE(json2protobuf_string__numeric_values__error_is_not_integer_required_for_sfixed64)
TEST_DECLARE(json2protobuf_string__numeric_values__error_is_not_integer_required_for_uint64)
TEST_DECLARE(json2protobuf_string__numeric_values__error_is_not_integer_required_for_fixed64)
TEST_DECLARE(json2protobuf_string__numeric_values__error_is_not_real_number_required_for_float)
TEST_DECLARE(json2protobuf_string__numeric_values__error_is_not_real_number_required_for_double)
TEST_DECLARE(json2protobuf_string__boolean_values__error_is_not_boolean_required_for_bool)

TASK_LIST_START
  TEST_ENTRY(protobuf2json_file__person__success)
  TEST_ENTRY(protobuf2json_string__person__required)
  TEST_ENTRY(protobuf2json_string__person__optional)
  TEST_ENTRY(protobuf2json_string__person__repeated_message)
  TEST_ENTRY(protobuf2json_string__bar__default_values)
  TEST_ENTRY(protobuf2json_string__person__error_in_nested_message)
  TEST_ENTRY(protobuf2json_string__person__error_cannot_dump_string)

  TEST_ENTRY(json2protobuf_file__person__success)
  TEST_ENTRY(json2protobuf_file__person__error_cannot_parse_bad_message)
  TEST_ENTRY(json2protobuf_file__person__error_cannot_parse_bad_json)
  TEST_ENTRY(json2protobuf_file__person__error_cannot_parse_unexistent_file)
  TEST_ENTRY(json2protobuf_string__person__error_cannot_parse_wrong_string)
  TEST_ENTRY(json2protobuf_string__person__required)
  TEST_ENTRY(json2protobuf_string__person__optional)
  TEST_ENTRY(json2protobuf_string__person__repeated_message)
  TEST_ENTRY(json2protobuf_string__bar__default_values)
  TEST_ENTRY(json2protobuf_string__numeric_values__values)
  TEST_ENTRY(json2protobuf_string__boolean_values__values)
  TEST_ENTRY(json2protobuf_string__person__error_is_not_object)
  TEST_ENTRY(json2protobuf_string__person__error_unknown_field)
  TEST_ENTRY(json2protobuf_string__person__error_unknown_enum_value)
  TEST_ENTRY(json2protobuf_string__person__error_is_not_array)
  TEST_ENTRY(json2protobuf_string__bar__error_string_is_not_string_required_for_string)
  TEST_ENTRY(json2protobuf_string__bar__error_is_not_string_required_for_enum)
  TEST_ENTRY(json2protobuf_string__numeric_values__error_is_not_integer_required_for_int32)
  TEST_ENTRY(json2protobuf_string__numeric_values__error_is_not_integer_required_for_sint32)
  TEST_ENTRY(json2protobuf_string__numeric_values__error_is_not_integer_required_for_sfixed32)
  TEST_ENTRY(json2protobuf_string__numeric_values__error_is_not_integer_required_for_uint32)
  TEST_ENTRY(json2protobuf_string__numeric_values__error_is_not_integer_required_for_fixed32)
  TEST_ENTRY(json2protobuf_string__numeric_values__error_is_not_integer_required_for_int64)
  TEST_ENTRY(json2protobuf_string__numeric_values__error_is_not_integer_required_for_sint64)
  TEST_ENTRY(json2protobuf_string__numeric_values__error_is_not_integer_required_for_sfixed64)
  TEST_ENTRY(json2protobuf_string__numeric_values__error_is_not_integer_required_for_uint64)
  TEST_ENTRY(json2protobuf_string__numeric_values__error_is_not_integer_required_for_fixed64)
  TEST_ENTRY(json2protobuf_string__numeric_values__error_is_not_real_number_required_for_float)
  TEST_ENTRY(json2protobuf_string__numeric_values__error_is_not_real_number_required_for_double)
  TEST_ENTRY(json2protobuf_string__boolean_values__error_is_not_boolean_required_for_bool)
TASK_LIST_END
