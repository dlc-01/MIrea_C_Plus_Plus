#include <iostream>

class Cone {
public:
    Cone();

    Cone(float x, float y, float z, float r, float h);

    virtual ~Cone() = default;

    virtual void input();

    virtual void output() const;

    [[nodiscard]] virtual float surfaceArea() const;

    [[nodiscard]] virtual float volume() const;

protected:
    float x, y, z;
    float r;
    float h;
};

class TruncatedCone : public Cone {
public:
    TruncatedCone();

    TruncatedCone(float x, float y, float z, float r1, float r2, float h);

    virtual void input() override;

    virtual void output() const override;

    [[nodiscard]] virtual float surfaceArea() const override;

    [[nodiscard]] virtual float volume() const override;

    bool operator==(const TruncatedCone &other) const;

    bool operator!=(const TruncatedCone &other) const;

    friend std::ostream &operator<<(std::ostream &os, const TruncatedCone &cone);

    friend std::istream &operator>>(std::istream &is, TruncatedCone &cone);

protected:
    float r2;
};

