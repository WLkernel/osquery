
/**
 *  Copyright (c) 2014-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed in accordance with the terms specified in
 *  the LICENSE file found in the root directory of this source tree.
 */

// Sanity check integration test for signature
// Spec file: specs/darwin/signature.table

#include <osquery/tests/integration/tables/helper.h>

namespace osquery {
namespace table_tests {

class signature : public testing::Test {
 protected:
  void SetUp() override {
    setUpEnvironment();
  }
};

TEST_F(signature, test_sanity) {
  // 1. Query data
  auto const data = execute_query("select * from signature where path = ''");
  // 2. Check size before validation
  // ASSERT_GE(data.size(), 0ul);
  // ASSERT_EQ(data.size(), 1ul);
  // ASSERT_EQ(data.size(), 0ul);
  // 3. Build validation map
  // See helper.h for avaialbe flags
  // Or use custom DataCheck object
  // ValidatatioMap row_map = {
  //      {"path", NormalType}
  //      {"hash_resources", IntType}
  //      {"arch", NormalType}
  //      {"signed", IntType}
  //      {"identifier", NormalType}
  //      {"cdhash", NormalType}
  //      {"team_identifier", NormalType}
  //      {"authority", NormalType}
  //}
  // 4. Perform validation
  // validate_rows(data, row_map);
}

} // namespace table_tests
} // namespace osquery
