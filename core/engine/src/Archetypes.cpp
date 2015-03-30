/**
 * @author Allan Deutsch
 * @version 0.5
 * @copyright Copyright (C) Allan Deutsch & Jeff Uong. All rights reserved.
 *
 */

#include "../headers/Archetypes.h"


namespace AlJeEngine
{
  namespace Archetypes
  {
    EntityPtr DefaultCamera()
    {
      EntityPtr camera(new Entity());

      camera->AddComponent(ComponentPtr(new Camera()));
      camera->AddComponent(ComponentPtr(new Transform()));
      camera->SetName("Camera");

      camera->GET_COMPONENT(Transform)->scale = glm::vec2(1600.0f, 900.0f);

      // this is for a test, disgregard it.
      //camera->GET_COMPONENT(Transform)->position = glm::vec2(10.f, 10.f);

      return camera;
    }

    EntityPtr BoxGameObject()
    {
      EntityPtr entity(new Entity());

      entity->AddComponent(ComponentPtr(new BoxCollider()));
      entity->AddComponent(ComponentPtr(new RigidBody()));
      entity->AddComponent(ComponentPtr(new Transform()));
      entity->AddComponent(ComponentPtr(new Sprite()));
      entity->SetName("Box Object");

      return entity;
    }

    EntityPtr BoxParticleObject()
    {
      EntityPtr entity(new Entity());

      entity->AddComponent(ComponentPtr(new BoxCollider()));
      entity->AddComponent(ComponentPtr(new Particle()));
      entity->AddComponent(ComponentPtr(new Transform()));
      entity->AddComponent(ComponentPtr(new Sprite()));
      entity->SetName("Box Particle");

      return entity;
    }

    EntityPtr FireParticleObject()
    {
      EntityPtr entity(new Entity());

      entity->AddComponent(ComponentPtr(new BoxCollider()));
      entity->AddComponent(ComponentPtr(new Particle()));
      entity->AddComponent(ComponentPtr(new Transform()));
      entity->AddComponent(ComponentPtr(new Sprite()));
      entity->GET_COMPONENT(Sprite)->_color = { 1.f, 0.498f, 0.063f, .5f};
      entity->SetName("Fire Particle");

      return entity;
    }

    EntityPtr GenericMenuObject()
    {
      EntityPtr entity(new Entity());
      entity->AddComponent(ComponentPtr(new BoxCollider()));
      entity->AddComponent(ComponentPtr(new Transform()));
      entity->AddComponent(ComponentPtr(new MenuObject()));
      entity->AddComponent(ComponentPtr(new Sprite()));
      entity->AddComponent(ComponentPtr(new RigidBody()));

      entity->GET_COMPONENT(RigidBody)->isStatic = true;
      entity->GET_COMPONENT(RigidBody)->gravity  = false;
      entity->GET_COMPONENT(RigidBody)->ghost    = true;

      entity->GET_COMPONENT(BoxCollider)->height = 10.f;
      entity->GET_COMPONENT(BoxCollider)->width  = 20.f;
      entity->GET_COMPONENT(Transform)->scale = { 20.f, 10.f };

      entity->SetName("Menu Object");

      return entity;
    }

    EntityPtr MainMenuExit()
    {
      EntityPtr entity = GenericMenuObject();

      entity->GET_COMPONENT(MenuObject)->_action = MenuAction::MM_Exit;
      entity->GET_COMPONENT(MenuObject)->_menuType = MenuObject::MAIN;

      entity->SetName("Main Menu Exit Button");

      return entity;
    }

    EntityPtr MainMenuStart()
    {
      EntityPtr entity = GenericMenuObject();

      entity->GET_COMPONENT(MenuObject)->_action = MenuAction::MM_Start;
      entity->GET_COMPONENT(MenuObject)->_menuType = MenuObject::MAIN;

      entity->SetName("Main Menu Start Button");

      return entity;
    }

    EntityPtr MainMenuCredits()
    {
      EntityPtr entity = GenericMenuObject();

      entity->GET_COMPONENT(MenuObject)->_action = MenuAction::MM_Credits;
      entity->GET_COMPONENT(MenuObject)->_menuType = MenuObject::MAIN;

      entity->SetName("Main Menu Credits Button");

      return entity;
    }

    EntityPtr MainMenuHowToPlay()
    {
      EntityPtr entity = GenericMenuObject();

      entity->GET_COMPONENT(MenuObject)->_action = MenuAction::MM_HowToPlay;
      entity->GET_COMPONENT(MenuObject)->_menuType = MenuObject::MAIN;

      entity->SetName("Main Menu How To Play Button");

      return entity;
    }

    EntityPtr MainMenuSettings()
    {
      EntityPtr entity = GenericMenuObject();

      entity->GET_COMPONENT(MenuObject)->_action = MenuAction::MM_Settings;
      entity->GET_COMPONENT(MenuObject)->_menuType = MenuObject::MAIN;

      entity->SetName("Main Menu Settings Button");

      return entity;
    }

    EntityPtr PauseMenuResume()
    {
      EntityPtr entity = GenericMenuObject();

      entity->GET_COMPONENT(MenuObject)->_action = MenuAction::PM_Resume;
      entity->GET_COMPONENT(MenuObject)->_menuType = MenuObject::PAUSE;

      entity->SetName("Pause Menu Resume Button");

      return entity;
    }

    EntityPtr PauseMenuQuit()
    {
      EntityPtr entity = GenericMenuObject();

      entity->GET_COMPONENT(MenuObject)->_action = MenuAction::PM_Quit;
      entity->GET_COMPONENT(MenuObject)->_menuType = MenuObject::PAUSE;

      entity->SetName("Pause Menu Quit Button");

      return entity;
    }

    EntityPtr PauseMenuRestart()
    {
      EntityPtr entity = GenericMenuObject();

      entity->GET_COMPONENT(MenuObject)->_action = MenuAction::PM_Restart;
      entity->GET_COMPONENT(MenuObject)->_menuType = MenuObject::PAUSE;

      entity->SetName("Pause Menu Restart Button");

      return entity;
    }

    EntityPtr PauseMenuOptions()
    {
      EntityPtr entity = GenericMenuObject();

      entity->GET_COMPONENT(MenuObject)->_action = MenuAction::PM_Options;
      entity->GET_COMPONENT(MenuObject)->_menuType = MenuObject::PAUSE;

      entity->SetName("Pause Menu Options Button");

      return entity;
    }

    EntityPtr CircleGameObject()
    {
      EntityPtr entity(new Entity());

      entity->AddComponent(ComponentPtr(new CircleCollider()));
      entity->AddComponent(ComponentPtr(new RigidBody()));
      entity->AddComponent(ComponentPtr(new Transform()));
      entity->AddComponent(ComponentPtr(new Sprite()));
      entity->GET_COMPONENT(Sprite)->mesh = Sprite::CIRCLE;
      entity->SetName("Circle Object");

      return entity;
    }

    EntityPtr CircleParticleObject()
    {
      EntityPtr entity(new Entity());

      entity->AddComponent(ComponentPtr(new CircleCollider()));
      entity->AddComponent(ComponentPtr(new Particle()));
      entity->AddComponent(ComponentPtr(new Transform()));
      entity->AddComponent(ComponentPtr(new Sprite()));
      entity->GET_COMPONENT(Sprite)->mesh = Sprite::CIRCLE;
      entity->SetName("Circle Particle");

      return entity;
    }
  
  
  } // Archetypes

} //AlJeEngine
