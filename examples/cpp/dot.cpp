#include "lib/effect_runner.h"
#include "dot.h"

int main(int argc, char **argv)
{
    EffectRunner r;

    DotEffect e("data/dot.png");
    r.setEffect(&e);

    // Defaults, overridable with command line options
    r.setMaxFrameRate(10);
    r.setLayout("../layouts/grid8x8.json");

    return r.main(argc, argv);
}
