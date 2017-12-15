#include "lib/effect_runner.h"
#include "rings.h"

int main(int argc, char **argv)
{
    RingsEffect e("data/glass.png");

    EffectRunner r;
    r.setEffect(&e);

    r.setLayout("../layouts/grid8x8.json");
    return r.main(argc, argv);
}
