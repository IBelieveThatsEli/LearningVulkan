#include "app.hpp"

namespace engine
{
  void App::run()
  {
    initWindow();
    initVulkan();
    mainLoop();
    cleanUp();
  }

  void App::initWindow()
  {
    glfwInit();

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
    
    window = glfwCreateWindow(WIDTH, HEIGHT, "Vulkan", nullptr, nullptr);
  }

  void App::initVulkan()
  {
    createInstance();
  }

  void App::mainLoop()
  {
    while (!glfwWindowShouldClose(window)) 
    {
      glfwPollEvents();
    }
  }

  void App::cleanUp()
  {
    glfwDestroyWindow(window);

    glfwTerminate();
  }

  void App::createInstance() 
  {
    VkApplicationInfo appInfo{};
    appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;

  }
}