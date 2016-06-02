/*
** Character.hpp for Character in /home/drozdz_b/Documents/TestIrrlitch3
**
** Made by drozdz_b
** Login   <drozdz_b@epitech.net>
**
** Started on  Thu May 26 15:18:39 2016 drozdz_b
** Last update Thu Jun 02 18:18:45 2016 drozdz_b
*/

#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_

#include <irr/irrlicht.h>
#include <map>

#include "CharacterInfo.hh"
#include "Object.hh"

using namespace irr;

class Character : public Object
{

private:
  scene::IAnimatedMeshSceneNode*	_node;
  //core::vector3df			_pos;
  CharacterInfo				_info;
  core::vector3d<f32>			_size;
  bool	_moving;
    bool	_movingPreced;

public:
  Character(scene::ISceneNode* node);
  Character(scene::ISceneNode* node, video::IVideoDriver *driver);
  Character(scene::ISceneManager* smgr, video::IVideoDriver * driver);
  ~Character();

  CharacterInfo&					getInfo();

  virtual void	move(f32 x, f32 y);
  virtual void	move(f32 x, f32 y, f32 z);
  virtual void	 stati();
  virtual void		updateAnim();
};

#endif
