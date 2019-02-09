#pragma once
#include "Engine\Time\Stopwatch.hpp"
#include "Engine\Core\Widget.hpp"
#include "Game\Player.hpp"
#include "Game\GameStates\GameState.hpp"
#include "Game\GameCamera.hpp"
#include "Game\GameCamera.hpp"

class Player;
class RenderScene;
class RenderScene2D;

class PlayingState : public GameState
{
public:
	PlayingState(Camera* camera) : GameState(camera)
	{
		m_type = PLAYING_GAME_STATE;
	}

	virtual ~PlayingState() override;
	
	virtual void Initialize() override;
	virtual void Update(float deltaSeconds) override;
	virtual void PreRender() override;
	virtual void Render() override;
	virtual void PostRender() override;
	virtual float UpdateFromInput(float deltaSeconds) override;

	void InitializeAxisObject();

	float UpdateFromInputDebug(float deltaSeconds);

public:
	RenderScene* m_renderScene = nullptr;
	RenderScene2D* m_renderScene2D = nullptr;
	Mesh* m_axisMesh = nullptr;

	Camera* m_uiCamera = nullptr;

	GameCamera* m_michaelCraftCamera = nullptr;

	Player* m_player = nullptr;
};

