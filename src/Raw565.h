#ifndef _RAW565_H
#define _RAW565_H

#include <Cariad.h>

class Raw565 : public Image {
    public:
        Raw565(const color_t *data, int w, int h);
        void draw(Cariad *dev, int x, int y);
        void draw(Cariad *dev, int x, int y, color_t t);
        void drawTransformed(Cariad *dev, int x, int y, int transform);
        void drawTransformed(Cariad *dev, int x, int y, int transform, color_t t);
        void draw(Cariad &dev, int x, int y) { draw(&dev, x, y); }
        void draw(Cariad &dev, int x, int y, color_t t) { draw(&dev, x, y, t); }
        void drawTransformed(Cariad &dev, int x, int y, int transform) { drawTransformed(&dev, x, y, transform); }
        void drawTransformed(Cariad &dev, int x, int y, int __attribute__((unused)) transform, color_t t) { drawTransformed(&dev, x, y, t); }

    private:
        const color_t *_data;
};

#endif
