#include "../../testing/testing.hpp"
#include "../../qt_tstfrm/macros.hpp"
#include "../skin.hpp"
#include "../resource_manager.hpp"
#include "../pen_info.hpp"
#include "../../std/vector.hpp"
#include "../../platform/platform.hpp"

UNIT_TEST(SkinTest_Main)
{
  GL_TEST_START;

  shared_ptr<yg::ResourceManager> rm(new yg::ResourceManager(yg::ResourceManager::Params()));
  yg::Skin * skin = loadSkin(rm, "basic.skn");

  double p0 [] = {1, 1};
  yg::PenInfo penInfo0(yg::Color(0xFF, 0, 0, 0xFF), 1, p0, 2, 0);
//  skin->mapPenInfo(penInfo0);

  double p1 [] = {10, 10, 20, 20};
  yg::PenInfo penInfo1(yg::Color(0xFF, 0, 0, 0xFF), 40, p1, 4, 0);

  double p2[] = {15, 15, 15, 40};
  yg::PenInfo penInfo2(yg::Color(0, 0xFF, 0, 0xFF), 40, p2, 4, 0);

  double p3[] = {5, 5, 45, 30};
  yg::PenInfo penInfo3(yg::Color(0xFF, 0, 0xFF, 0xFF), 35, p3, 4, 0);

//  skin->mapPenInfo(penInfo1);
//  skin->mapPenInfo(penInfo2);

  // Overflowing

//  skin->mapPenInfo(penInfo3);

  delete skin;
}

