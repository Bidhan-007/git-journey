
            
import pygame
import math

pygame.init()

# Screen
WIDTH, HEIGHT = 800, 600
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Rectangle Enemy Follows Player")

clock = pygame.time.Clock()

# Colors
WHITE = (255, 255, 255)
BLUE = (0, 100, 255)
RED = (255, 50, 50)

# Player
player_x, player_y = 400, 300
player_speed = 5
player_size = 50

# Enemy
enemy_x, enemy_y = 100, 100
enemy_speed = 2
enemy_size = 50

running = True
while running:
    clock.tick(60)
    screen.fill(WHITE)

    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

    # Player movement
    keys = pygame.key.get_pressed()
    if keys[pygame.K_w] or keys[pygame.K_UP]:
        player_y -= player_speed
    if keys[pygame.K_s] or keys[pygame.K_DOWN]:
        player_y += player_speed
    if keys[pygame.K_a] or keys[pygame.K_LEFT]:
        player_x -= player_speed
    if keys[pygame.K_d] or keys[pygame.K_RIGHT]:
        player_x += player_speed

    # Enemy follows player
    dx = player_x - enemy_x
    dy = player_y - enemy_y
    distance = math.hypot(dx, dy)

    if distance != 0:
        dx /= distance
        dy /= distance

    enemy_x += dx * enemy_speed
    enemy_y += dy * enemy_speed

    # Draw player and enemy (RECTANGLES)
    pygame.draw.rect(screen, BLUE, (player_x, player_y, player_size, player_size))
    pygame.draw.rect(screen, RED, (enemy_x, enemy_y, enemy_size, enemy_size))

    pygame.display.flip()

pygame.quit()
