/*
 * mode_afterimg.h
 * 残像表示モードクラス
 * 
 */
#ifndef mode_afterimg_h
#define mode_afterimg_h

#include "modebase.h"

namespace kirabit {

// クラスの定義
// クラス名・コンストラクタ名・関数名や使用する変数名を定義します。
class ModeAfterimg : public ModeBase
{
  public:
    ModeAfterimg();

    void setup(void);
    void start(void);
    void stop(void);
    void main(void);
    void nextimage(void);
    void count_reset(void);

    void set_dir(int dir){_dir = dir;}

  private:
    //void main_accel(void);

  private:
    int img_index;
    uint8_t counter;
    int _dir;
};

} // namespace kirabit

extern kirabit::ModeAfterimg MODE_AFTERIMG;

#endif  // mode_bright_h
