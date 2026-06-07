# -Lag

### Smooth Geometry Dash

-Lag is a lightweight performance mod for Geometry Dash built with Geode. Its goal is simple: reduce unnecessary visual overhead and provide a smoother gameplay experience, especially on demanding levels.

---

## Features

### 🚀 Ultra Low Graphics
Applies multiple performance-focused optimizations with a single switch.

### ✨ Disable Glow
Reduces rendering load by disabling glow effects whenever possible.

### 🌫 Hide Particles
Removes particle-heavy visual effects that can impact performance.

### 📈 Better FPS
Designed to help maintain smoother framerates on low-end and mid-range devices.

### ⚙️ Easy Configuration
Enable or disable features directly from the Geode settings menu.

---

## Requirements

- Geometry Dash 2.2+
- Geode Loader

---

## Installation

### Through Geode

1. Download the latest `.geode` release.
2. Open Geode.
3. Go to **Mods**.
4. Press **Install Mod**.
5. Select the downloaded file.
6. Restart the game if required.

---

## Settings

| Setting | Description |
|----------|-------------|
| Ultra Low Graphics | Enables all available performance optimizations |
| Hide Particles | Disables particle effects |
| Disable Glow | Disables glow effects |
| Performance Logs | Outputs debug information to Geode logs |

---

## Performance Notes

-Lag focuses on reducing visual effects and unnecessary rendering overhead.

Results may vary depending on:
- Hardware specifications
- Level complexity
- Active mods
- Game settings

The largest improvements are typically seen in:
- Effect-heavy levels
- Decoration-heavy levels
- Low-end systems
- Integrated graphics devices

---

## Compatibility

-Lag is designed for modern versions of Geometry Dash and Geode.

Compatible with most mods that do not directly modify rendering systems.

---

## Building

```bash
cmake -B build
cmake --build build --config Release
```

The compiled `.geode` file will be generated in the build output directory.

---

## Roadmap

- [ ] Advanced particle optimization
- [ ] Shader reduction mode
- [ ] Decoration culling
- [ ] FPS monitor
- [ ] Memory usage monitor
- [ ] Automatic performance presets

---

## Contributing

Contributions, suggestions, and bug reports are welcome.

Feel free to open an issue or submit a pull request.

---

## License

This project is licensed under the MIT License.

---

# -Lag

### Less Effects. More FPS.
